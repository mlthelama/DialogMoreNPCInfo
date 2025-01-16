#include "setting_npc.h"

namespace setting {
    static std::vector<RE::FormID> npc_form_ids;

    void setting_npc::load_setting() {
        logger::info("loading input setting file"sv);
        auto file = R"(Data\SKSE\Plugins\DialogueMoreNPCInfo\DialogueMoreNPCInfo_NPC.json)";
        if (const std::ifstream input_setting_file(file); !input_setting_file) {
            logger::warn("file {} not found"sv, file);
            return;
        }

        logger::info("loading input setting from file {}"sv, file);


        logger::info("done loading input setting file"sv);
    }

    std::vector<RE::FormID> setting_npc::get_npc_form_ids() { return npc_form_ids; }
}  // setting
