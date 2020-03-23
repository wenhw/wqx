#!/bin/sh
xcrun xcodebuild -project Unity-iPhone.xcodeproj -scheme Unity-iPhone \
  -archivePath Unity-iPhone.xcarchive archive

xcrun xcodebuild -exportArchive -archivePath Unity-iPhone.xcarchive \
  -exportPath ./build -exportOptionsPlist ExportOptions.plist
