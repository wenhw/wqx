#!/bin/sh

xcodebuild archive -project Unity-iPhone.xcodeproj -scheme Unity-iPhone \
  -archivePath Unity-iPhone.xcarchive | xcpretty

xcodebuild -exportArchive -allowProvisioningUpdates -archivePath Unity-iPhone.xcarchive \
   -exportOptionsPlist ExportOptions.plist -exportPath ./build | xcpretty
