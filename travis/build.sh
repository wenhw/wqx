#!/bin/sh

xcodebuild archive -project $XCODEPROJ.xcodeproj -scheme $XCODEPROJ \
  -archivePath $XCODEPROJ.xcarchive

xcodebuild -exportArchive -allowProvisioningUpdates -archivePath $XCODEPROJ.xcarchive \
   -exportOptionsPlist ExportOptions.plist -exportPath ./build
