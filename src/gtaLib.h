#ifndef GTALIB_H
#define GTALIB_H
extern "C"
{
    float __stdcall get_maxArmor();
    float __stdcall get_maxHealth();
    unsigned int __stdcall get_pid(char *processName);
    unsigned int __stdcall joaat(char *input);
    unsigned int __stdcall keyboard_watch();
    unsigned long long __stdcall read_localAddress(char *thread, int offset);
    void __stdcall antiAFK(bool status);
    void __stdcall change_session(int value);
    void __stdcall destroy_enemy_vehicles();
    void __stdcall dll_inject(char *dllPath);
    void __stdcall fill_current_ammo();
    void __stdcall get_position(float *position);
    void __stdcall gtav_init();
    void __stdcall keydown(unsigned int scanKey);
    void __stdcall keyup(unsigned int scanKey);
    void __stdcall kill_enemy_npc();
    void __stdcall kill_process();
    void __stdcall move_forward();
    void __stdcall read_cut(int *data);
    void __stdcall repairing_vehicle();
    void __stdcall set_armor(float armor);
    void __stdcall set_copLevel(int copLevel);
    void __stdcall set_godMode(bool status);
    void __stdcall set_health(float health);
    void __stdcall set_infiniteAmmo(bool status);
    void __stdcall set_luckyWheel(int value = 18);
    void __stdcall set_seatbelt(bool status);
    void __stdcall set_vehicleAbility(int value);
    void __stdcall set_vehicleGodMode(bool status);
    void __stdcall set_weaponAmmoType(int value);
    void __stdcall set_weather(int weather);
    void __stdcall spawn_vehicle(unsigned int hash, float d = 5.f);
    void __stdcall stat_write(char *stat, int value);
    void __stdcall suspend_process();
    void __stdcall teleport_enemy_npc(float *position);
    void __stdcall teleport_to_objective();
    void __stdcall teleport_to_waypoint();
    void __stdcall teleport(float *position);
    void __stdcall write_cut(int *data);
    void __stdcall write_localAddressFloat(char *threadName, unsigned long long offset, float value);
    void __stdcall write_localAddressInt(char *threadName, unsigned long long offset, int value);
}
#endif