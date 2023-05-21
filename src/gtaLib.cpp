#include "gtaLib.h"
#include "gtav.h"
#include "keyboard.h"

Gtav *gtav;

/**
 * @brief 监听按键
 *
 * @return unsigned int
 */
unsigned int keyboard_watch()
{
    return keyboard::keyboard_watch();
}

/**
 * @brief 按下键盘
 *
 * @param scanKey
 */
void keydown(unsigned int scanKey)
{
    keyboard::keydown(scanKey);
}

/**
 * @brief 松开键盘
 *
 * @param scanKey
 */
void keyup(unsigned int scanKey)
{
    keyboard::keyup(scanKey);
}

/**
 * @brief gtav初始化
 *
 */
void gtav_init()
{
    gtav = new Gtav();
}

/**
 * @brief 设置血量值
 *
 * @param health
 */
void set_health(float health)
{
    gtav->set_health(health);
}

/**
 * @brief 设置护甲数值
 *
 * @param armor
 */
void set_armor(float armor)
{
    gtav->set_armor(armor);
}

/**
 * @brief 设置无敌状态
 *
 * @param status
 */
void set_godMode(bool status)
{
    gtav->set_godMode(status);
}

/**
 * @brief 设置安全带状态
 *
 * @param status
 */
void set_seatbelt(bool status)
{
    gtav->set_seatbelt(status);
}

/**
 * @brief 设置天气
 *
 * @param weather
 */
void set_weather(int weather)
{
    gtav->set_weather(weather);
}

/**
 * @brief 设置载具无敌状态
 *
 * @param status
 */
void set_vehicleGodMode(bool status)
{
    gtav->set_vehicleGodMode(status);
}

/**
 * @brief 传送到坐标点
 *
 * @param position
 */
void teleport(float *position)
{
    gtav->teleport(position);
}

/**
 * @brief joaat运算
 *
 * @param input
 * @return unsigned int
 */
unsigned int joaat(char *input)
{
    return gtav->joaat(input);
}

/**
 * @brief 获取当前定位
 *
 * @param position
 */
void get_position(float *position)
{
    gtav->get_position(position);
}

/**
 * @brief teleport_to_waypoint
 *
 */
void teleport_to_waypoint()
{
    gtav->teleport_to_waypoint();
}

/**
 * @brief 传送到目标点
 *
 */
void teleport_to_objective()
{
    gtav->teleport_to_objective();
}

/**
 * @brief 补满弹药
 *
 */
void fill_current_ammo()
{
    gtav->fill_current_ammo();
}

/**
 * @brief 向前移动
 *
 */
void move_forward()
{
    gtav->move_forward();
}

/**
 * @brief 设置通缉等级
 *
 * @param copLevel
 */
void set_copLevel(int copLevel)
{
    gtav->set_copLevel(copLevel);
}

/**
 * @brief 获取最大血量值
 *
 * @return float
 */
float get_maxHealth()
{
    return gtav->get_maxHealth();
}

/**
 * @brief 获取最大护甲值
 *
 * @return float
 */
float get_maxArmor()
{
    return gtav->get_maxArmor();
}

/**
 * @brief 设置无限弹药状态
 *
 * @param value
 */
void set_infiniteAmmo(bool status)
{
    gtav->set_infiniteAmmo(status);
}

/**
 * @brief 修复载具
 *
 */
void repairing_vehicle()
{
    gtav->repairing_vehicle();
}

/**
 * @brief 切换战局
 *
 * @param value
 */
void change_session(int value)
{
    gtav->change_session(value);
}

/**
 * @brief 设置载具能力
 *
 * @param value
 */
void set_vehicleAbility(int value)
{
    gtav->set_vehicleAbility(value);
}

/**
 * @brief 设置武器弹药类型
 *
 * @param value
 */
void set_weaponAmmoType(int value)
{
    gtav->set_weaponAmmoType(value);
}

/**
 * @brief 刷载具
 *
 * @param hash 载具hash
 * @param d 距离
 */
void spawn_vehicle(unsigned int hash, float d)
{
    gtav->spawn_vehicle(hash, d);
}

/**
 * @brief 挂起进程卡单
 *
 */
void suspend_process()
{
    gtav->suspend_process();
}

/**
 * @brief 传送敌人到坐标点
 *
 * @param position
 */
void teleport_enemy_npc(float *position)
{
    gtav->teleport_enemy_npc(position);
}

/**
 * @brief 杀死敌对NPC
 *
 */
void kill_enemy_npc()
{
    gtav->kill_enemy_npc();
}

/**
 * @brief 摧毁敌对NPC载具
 *
 */
void destroy_enemy_vehicles()
{
    gtav->destroy_enemy_vehicles();
}

/**
 * @brief 设置幸运转盘结果
 *
 * @param value
 */
void set_luckyWheel(int value)
{
    gtav->set_luckyWheel(value);
}

/**
 * @brief 终止进程
 *
 */
void kill_process()
{
    gtav->kill_process();
}

/**
 * @brief stat写入
 *
 * @param stat
 * @param value
 */
void stat_write(char *stat, int value)
{
    gtav->stat_write(stat, value);
}

/**
 * @brief dll注入
 *
 * @param dllPath
 */
void dll_inject(char *dllPath)
{
    gtav->dll_inject(dllPath);
}

/**
 * @brief 读取分红
 *
 * @param data int[16]
 */
void read_cut(int *data)
{
    gtav->read_cut(data);
}

/**
 * @brief 写入分红
 *
 * @param data int[16]
 */
void write_cut(int *data)
{
    gtav->write_cut(data);
}

/**
 * @brief 挂机防踢
 *
 * @param status
 */
void antiAFK(bool status)
{
    gtav->antiAFK(status);
}

/**
 * @brief local线程算法int
 *
 * @param threadName
 * @param offset
 */
void write_localAddressInt(char *threadName, unsigned long long offset, int value)
{
    gtav->localAddress(threadName, offset, value);
}

/**
 * @brief local线程算法float
 *
 * @param threadName
 * @param offset
 */
void write_localAddressFloat(char *threadName, unsigned long long offset, float value)
{
    gtav->localAddress(threadName, offset, value);
}

/**
 * @brief 获取进程PID
 *
 * @param processName
 * @return unsigned int
 */
unsigned int get_pid(char *processName)
{
    return memorycontrol::get_pid(processName);
}

/**
 * @brief 
 * 
 * @param thread 线程名
 * @param offset 偏移
 * @return unsigned long 
 */
unsigned long long __stdcall read_localAddress(char *thread, int offset)
{
    return gtav->localAddress(thread, offset);
}
