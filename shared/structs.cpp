#include "structs.h"

// pretty much all serialization for structs to json
// ideally this should be generated

void nibashared::to_json(nlohmann::json &j, const battlestats &stats) {
    j = nlohmann::json{{"attack_min", stats.attack_min},
                       {"attack_max", stats.attack_max},
                       {"accuracy", stats.accuracy},
                       {"evasion", stats.evasion},
                       {"speed", stats.speed},
                       {"hp", stats.hp},
                       {"mp", stats.mp},
                       {"inner_power", stats.inner_power},
                       {"defence", stats.defence}};
}

void nibashared::from_json(const nlohmann::json &j, battlestats &stats) {
    j.at("attack_min").get_to(stats.attack_min);
    j.at("attack_max").get_to(stats.attack_max);
    j.at("accuracy").get_to(stats.accuracy);
    j.at("evasion").get_to(stats.evasion);
    j.at("speed").get_to(stats.speed);
    j.at("hp").get_to(stats.hp);
    j.at("mp").get_to(stats.mp);
    j.at("inner_power").get_to(stats.inner_power);
    j.at("defence").get_to(stats.defence);
}

void nibashared::to_json(nlohmann::json &j, const attributes &attr) {
    j = nlohmann::json{{"strength", attr.strength},
                       {"dexterity", attr.dexterity},
                       {"physique", attr.physique},
                       {"spirit", attr.spirit}};
}

void nibashared::from_json(const nlohmann::json &j, attributes &attr) {
    j.at("strength").get_to(attr.strength);
    j.at("dexterity").get_to(attr.dexterity);
    j.at("physique").get_to(attr.physique);
    j.at("spirit").get_to(attr.spirit);
}

void nibashared::to_json(nlohmann::json &j, const character &character) {
    j = nlohmann::json{{"name", character.name},
                       {"id", character.id},
                       {"attrs", character.attrs},
                       {"stats", character.stats},
                       {"active_magic", character.active_magic}};
}

void nibashared::from_json(const nlohmann::json &j, character &character) {
    j.at("name").get_to(character.name);
    j.at("id").get_to(character.id);
    j.at("attrs").get_to(character.attrs);
    j.at("stats").get_to(character.stats);
    j.at("active_magic").get_to(character.active_magic);
}

void nibashared::to_json(nlohmann::json &j, const magic &magic) {
    j = nlohmann::json{{"name", magic.name},
                       {"id", magic.id},
                       {"active", magic.active},
                       {"cd", magic.cd},
                       {"multiplier", magic.multiplier},
                       {"stats", magic.stats}};
}

void nibashared::from_json(const nlohmann::json &j, magic &magic) {
    j.at("name").get_to(magic.name);
    j.at("id").get_to(magic.id);
    j.at("active").get_to(magic.active);
    j.at("cd").get_to(magic.cd);
    j.at("multiplier").get_to(magic.multiplier);
    j.at("stats").get_to(magic.stats);
}