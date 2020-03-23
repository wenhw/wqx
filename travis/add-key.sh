#!/bin/sh
# Create a custom keychain
security create-keychain -p travis ios-build.keychain
security default-keychain -d user -s ios-build.keychain
security unlock-keychain -p travis ios-build.keychain

# Set keychain timeout to 1 hour for long builds
security set-keychain-settings -t 3600 -l ~/Library/Keychains/ios-build.keychain

security import ./travis/cert/AppleWWDRCA.cer -k ~/Library/Keychains/ios-build.keychain -T /usr/bin/codesign -A
security import ./travis/cert/$CERT_NAME.cer -k ~/Library/Keychains/ios-build.keychain -T /usr/bin/codesign -A
security import ./travis/cert/$CERT_NAME.p12 -k ~/Library/Keychains/ios-build.keychain -P $KEY_PASSWORD -A

# Fix for OS X Sierra that hungs in the codesign step
security set-key-partition-list -S apple-tool:,apple: -s -k travis ios-build.keychain

echo "list keychains: "
security list-keychains
echo " ****** "

echo "find indentities keychains: "
security find-identity -p codesigning  ~/Library/Keychains/ios-build.keychain
echo " ****** "

mkdir -p ~/Library/MobileDevice/Provisioning\ Profiles
cp ./travis/cert/$CERT_NAME.mobileprovision ~/Library/MobileDevice/Provisioning\ Profiles/
