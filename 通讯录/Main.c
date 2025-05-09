#include "contact.h"

// 显示主菜单函数
void menu() {
    printf("********************************\n");
    printf("***** 1. 添加联系人*************\n");
    printf("***** 2. 删除指定联系人*********\n");
    printf("***** 3. 查找指定联系人*********\n");
    printf("***** 4. 修改指定联系人*********\n");
    printf("***** 5. 显示所有联系人*********\n");
    printf("***** 6. 一键排序***************\n");
    printf("***** 0. 退出通讯录*************\n");
    printf("********************************\n");
}

// 测试函数，包含主要的游戏循环逻辑
void test() {
    int input; // 用户输入变量
    Contact con; // 联系人结构体实例
    InitContact(&con); // 初始化通讯录

    do {
        printf("请选择：>\n");
        scanf("%d", &input); // 读取用户的选择
        switch (input) {
        case ADD: // 添加联系人
            AddContact(&con);
            break;
        case DEL: // 删除联系人
            DelContact(&con);
            break;
        case SEARCH: // 查找联系人
            SearchContact(&con);
            break;
        case MODIFY: // 修改联系人信息
            ModifyContact(&con);
            break;
        case SHOW: // 显示所有联系人
            ShowContact(&con);
            break;
        case SORT: // 排序联系人
            SortContact(&con);
            break;
        case EXIT: // 退出通讯录
            DestroyContact(&con); // 销毁通讯录
            printf("退出通讯录\n");
            break;
        default: // 默认情况，输入错误
            printf("选择错误, 重新选择\n");
            break;
        }
    } while (input != EXIT); // 当输入为EXIT时退出循环
}

// 主函数，程序入口点
int main() {
    menu(); // 显示菜单
    test(); // 运行测试函数，开始游戏
    return 0; // 程序正常结束返回
}