#!/bin/sh

xcodebuild archive -project $XCODEPROJ.xcodeproj -scheme $XCODEPROJ \
  -archivePath $XCODEPROJ.xcarchive | xcpretty

xcodebuild -exportArchive -allowProvisioningUpdates -archivePath $XCODEPROJ.xcarchive \
   -exportOptionsPlist ExportOptions.plist -exportPath ./build | xcpretty
