inherit SKILL;

mapping *quest = ({
        ([      "quest":                "֣����",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "������ǿ��",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            35,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "������Ů",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "������ɮ",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               15
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 600,
                "exp_bonus":            40,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "ũ��",
                "quest_type":           "ɱ",
                "time":                 120,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               12
        ]),
        ([      "quest":                "�ÿ�",
                "quest_type":           "ɱ",
                "time":                 200,
                "exp_bonus":            25,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "�Է�",
                "quest_type":           "ɱ",
                "time":                 120,
                "exp_bonus":            15,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "������",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "������",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "������",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            50,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "����צ��",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            45,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            10,
                "score" :               10
        ]),
        ([      "quest":                "Բ��",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "ϧ��",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "��ɮ��",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            10,
                "score" :               10
        ]),
        ([      "quest":                "��ʬ����",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            35,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            35,
                "pot_bonus":            20,
                "score" :               10
        ]),
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

