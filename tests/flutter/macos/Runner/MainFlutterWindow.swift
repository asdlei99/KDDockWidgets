/**
  This file was auto-generated by the Flutter SDK

  SPDX-FileCopyrightText: 2014 The Flutter Authors.
  SPDX-License-Identifier: BSD-3-Clause
*/

import Cocoa
import FlutterMacOS

class MainFlutterWindow: NSWindow {
  override func awakeFromNib() {
    let flutterViewController = FlutterViewController()
    let windowFrame = self.frame
    self.contentViewController = flutterViewController
    self.setFrame(windowFrame, display: true)

    RegisterGeneratedPlugins(registry: flutterViewController)

    super.awakeFromNib()
  }
}
