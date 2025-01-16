#pragma once

namespace setting {
    class setting_npc {
    public:
        static void load_setting();

        static std::vector<RE::FormID> get_npc_form_ids();
    };
}  // setting
