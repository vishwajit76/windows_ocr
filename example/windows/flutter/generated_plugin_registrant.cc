//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <file_selector_windows/file_selector_plugin.h>
#include <windows_ocr/windows_ocr_plugin.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  FileSelectorPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("FileSelectorPlugin"));
  WindowsOcrPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("WindowsOcrPlugin"));
}
