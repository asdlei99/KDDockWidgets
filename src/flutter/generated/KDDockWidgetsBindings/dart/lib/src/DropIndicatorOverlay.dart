/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/
import 'dart:ffi' as ffi;
import 'package:ffi/ffi.dart';
import 'TypeHelpers.dart';
import '../Bindings.dart';
import '../Bindings_KDDWBindingsCore.dart' as KDDWBindingsCore;
import '../Bindings_KDDWBindingsFlutter.dart' as KDDWBindingsFlutter;
import '../LibraryLoader.dart';
import '../FinalizerHelpers.dart';

var _dylib = Library.instance().dylib;

class DropIndicatorOverlay extends KDDWBindingsCore.Controller {
  DropIndicatorOverlay.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  DropIndicatorOverlay.init() : super.init() {}
  factory DropIndicatorOverlay.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as DropIndicatorOverlay;
    }
    return DropIndicatorOverlay.fromCppPointer(cppPointer, needsAutoDelete);
  } //DropIndicatorOverlay(KDDockWidgets::Core::DropArea * dropArea)
  DropIndicatorOverlay(KDDWBindingsCore.DropArea? dropArea) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__constructor_DropArea')
        .asFunction();
    thisCpp = func(dropArea == null ? ffi.nullptr : dropArea.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // currentDropLocation() const
  int currentDropLocation() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__currentDropLocation')
        .asFunction();
    return func(thisCpp);
  } // currentDropLocationChanged()

  currentDropLocationChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__currentDropLocationChanged')
        .asFunction();
    func(thisCpp);
  } // dropIndicatorVisible(KDDockWidgets::DropLocation arg__1) const

  bool dropIndicatorVisible(int arg__1) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(1587))
        .asFunction();
    return func(thisCpp, arg__1) != 0;
  }

  static int dropIndicatorVisible_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as DropIndicatorOverlay;
    if (dartInstance == null) {
      print(
          "Dart instance not found for DropIndicatorOverlay::dropIndicatorVisible(KDDockWidgets::DropLocation arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.dropIndicatorVisible(arg__1);
    return result ? 1 : 0;
  } // hover(QPoint globalPos)

  int hover(QPoint globalPos) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__hover_QPoint')
        .asFunction();
    return func(thisCpp, globalPos == null ? ffi.nullptr : globalPos.thisCpp);
  } // hover_impl(QPoint globalPos)

  int hover_impl(QPoint globalPos) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1591))
        .asFunction();
    return func(thisCpp, globalPos == null ? ffi.nullptr : globalPos.thisCpp);
  }

  static int hover_impl_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> globalPos) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as DropIndicatorOverlay;
    if (dartInstance == null) {
      print(
          "Dart instance not found for DropIndicatorOverlay::hover_impl(QPoint globalPos)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hover_impl(QPoint.fromCppPointer(globalPos));
    return result;
  } // hoveredFrame() const

  KDDWBindingsCore.Group hoveredFrame() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__hoveredFrame')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return KDDWBindingsCore.Group.fromCppPointer(result, false);
  } // hoveredFrameChanged(KDDockWidgets::Core::Group * arg__1)

  hoveredFrameChanged(KDDWBindingsCore.Group? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__hoveredFrameChanged_Group')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // hoveredFrameRect() const

  QRect hoveredFrameRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__hoveredFrameRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // hoveredFrameRectChanged()

  hoveredFrameRectChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__hoveredFrameRectChanged')
        .asFunction();
    func(thisCpp);
  } // isHovered() const

  bool isHovered() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__isHovered')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // multisplitterLocationFor(KDDockWidgets::DropLocation arg__1)
      int multisplitterLocationFor(int arg__1) {
    final int_Func_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_ffi_Int32_FFI>>(
            'c_static_KDDockWidgets__Core__DropIndicatorOverlay__multisplitterLocationFor_DropLocation')
        .asFunction();
    return func(arg__1);
  } // onFrameDestroyed()

  onFrameDestroyed() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__onFrameDestroyed')
        .asFunction();
    func(thisCpp);
  } // onHoveredFrameChanged(KDDockWidgets::Core::Group * arg__1)

  onHoveredFrameChanged(KDDWBindingsCore.Group? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1603))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void onHoveredFrameChanged_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as DropIndicatorOverlay;
    if (dartInstance == null) {
      print(
          "Dart instance not found for DropIndicatorOverlay::onHoveredFrameChanged(KDDockWidgets::Core::Group * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance
        .onHoveredFrameChanged(KDDWBindingsCore.Group.fromCppPointer(arg__1));
  } // posForIndicator(KDDockWidgets::DropLocation arg__1) const

  QPoint posForIndicator(int arg__1) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(1606))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, arg__1);
    return QPoint.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> posForIndicator_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as DropIndicatorOverlay;
    if (dartInstance == null) {
      print(
          "Dart instance not found for DropIndicatorOverlay::posForIndicator(KDDockWidgets::DropLocation arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.posForIndicator(arg__1);
    return result.thisCpp;
  } // removeHover()

  removeHover() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__removeHover')
        .asFunction();
    func(thisCpp);
  } // setCurrentDropLocation(KDDockWidgets::DropLocation location)

  setCurrentDropLocation(int location) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__setCurrentDropLocation_DropLocation')
        .asFunction();
    func(thisCpp, location);
  } // setHoveredFrame(KDDockWidgets::Core::Group * arg__1)

  setHoveredFrame(KDDWBindingsCore.Group? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__setHoveredFrame_Group')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setHoveredFrameRect(QRect arg__1)

  setHoveredFrameRect(QRect arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__setHoveredFrameRect_QRect')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void setParentView_impl_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as DropIndicatorOverlay;
    if (dartInstance == null) {
      print(
          "Dart instance not found for DropIndicatorOverlay::setParentView_impl(KDDockWidgets::Core::View * parent)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance
        .setParentView_impl(KDDWBindingsCore.View.fromCppPointer(parent));
  } // setWindowBeingDragged(bool arg__1)

  setWindowBeingDragged(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__setWindowBeingDragged_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_KDDockWidgets__Core__DropIndicatorOverlay__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // updateVisibility()

  updateVisibility() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(1619))
        .asFunction();
    func(thisCpp);
  }

  static void updateVisibility_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as DropIndicatorOverlay;
    if (dartInstance == null) {
      print(
          "Dart instance not found for DropIndicatorOverlay::updateVisibility()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateVisibility();
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1587:
        return "c_KDDockWidgets__Core__DropIndicatorOverlay__dropIndicatorVisible_DropLocation";
      case 1591:
        return "c_KDDockWidgets__Core__DropIndicatorOverlay__hover_impl_QPoint";
      case 1603:
        return "c_KDDockWidgets__Core__DropIndicatorOverlay__onHoveredFrameChanged_Group";
      case 1606:
        return "c_KDDockWidgets__Core__DropIndicatorOverlay__posForIndicator_DropLocation";
      case 872:
        return "c_KDDockWidgets__Core__DropIndicatorOverlay__setParentView_impl_View";
      case 1619:
        return "c_KDDockWidgets__Core__DropIndicatorOverlay__updateVisibility";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 1587:
        return "dropIndicatorVisible";
      case 1591:
        return "hover_impl";
      case 1603:
        return "onHoveredFrameChanged";
      case 1606:
        return "posForIndicator";
      case 872:
        return "setParentView_impl";
      case 1619:
        return "updateVisibility";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_KDDockWidgets__Core__DropIndicatorOverlay__registerVirtualMethodCallback')
        .asFunction();
    const callbackExcept1587 = 0;
    final callback1587 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int32_FFI>(
            DropIndicatorOverlay.dropIndicatorVisible_calledFromC,
            callbackExcept1587);
    registerCallback(thisCpp, callback1587, 1587);
    const callbackExcept1591 = 0;
    final callback1591 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_FFI>(
            DropIndicatorOverlay.hover_impl_calledFromC, callbackExcept1591);
    registerCallback(thisCpp, callback1591, 1591);
    final callback1603 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            DropIndicatorOverlay.onHoveredFrameChanged_calledFromC);
    registerCallback(thisCpp, callback1603, 1603);
    final callback1606 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_ffi_Int32_FFI>(
            DropIndicatorOverlay.posForIndicator_calledFromC);
    registerCallback(thisCpp, callback1606, 1606);
    final callback872 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            KDDWBindingsCore.Controller.setParentView_impl_calledFromC);
    registerCallback(thisCpp, callback872, 872);
    final callback1619 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        DropIndicatorOverlay.updateVisibility_calledFromC);
    registerCallback(thisCpp, callback1619, 1619);
  }
}
