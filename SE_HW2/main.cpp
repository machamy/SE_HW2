// ��� ����
#include <stdio.h>
#include <string.h>
#include <fstream>

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

// �Լ� ����
void doTask();

// ���� ����
ofstream out_fp;
ifstream in_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}
void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                // �ش� ��� ���� 
                // join

                break;
            }
            case 2:
            {
                break;
            }
            case 7:
            {
                switch (menu_level_2)
                {
                case 1:   // "6.1. ���ᡰ �޴� �κ�
                {

                    is_program_exit = 1;
                    break;
                }
                }
            }
            }
        }
        }
    }
}

