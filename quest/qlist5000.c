inherit SKILL;

mapping *quest = ({
        ([      "quest":                "֣����",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "��Ե����",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "������ɮ",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               15
        ]),
        ([      "quest":                "�ĸ",
                "quest_type":           "ɱ",
                "time":                 50,
                "exp_bonus":            20,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "ũ��",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               12
        ]),
        ([      "quest":                "�ÿ�",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "�Է�",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            25,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "������",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "������",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "Բ��",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "ϧ��",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "��ɮ��",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "��ʬ����",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            40,
                "score" :               10
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               10
        ]),
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

