// fly.c

inherit NPC;

void create()
{
        set_name("����", ({ "rat" }) );
        set("race", "Ұ��");
        set("age", 1);
        set("long", "һֻ��ͷ���ԵĴ�����\n");

        set("limbs", ({ "ͷ��", "����"}) );
        set("verbs", ({ "bite" }) );

        set_skill("dodge", 120);

        setup();
}