#!/bin/sh
security delete-keychain ios-build.keychain
rm -f ~/Library/MobileDevice/Provisioning\ Profiles/$CERT_NAME.mobileprovision
rm -f ~/Library/MobileDevice/Provisioning\ Profiles/team.mobileprovision
