#include "setting.h"
#include "setting/setting_npc.h"

namespace setting {
    void setting::load_all_settings() { setting_npc::load_setting(); }
}  // setting
