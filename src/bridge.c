#include "bridge.h"
#include "call.h"

int debug_main(void);

int main(void)
{
    debug_main();
    return 0;
}

int bridge_main(void)
{
    write(0, "%s", "bridge main\n");

    uint8_t bridge_setup_buf = 0;

    kernel_setup(&bridge_setup_buf, 1);

    write(0, "%s", "\nbridge inf loop\n");

    while (1)
    {
        uint8_t buf[64];

        /*
            나중에 함수로 뺄거
            프로토콜 핸들 이란 이름을 붙일 예정
        */

#pragma region protocol_handle
        uint8_t mode = 0;

        switch (bridge_setup_buf & 0b1111)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            ipc_rece(buf);
            bridge_setup_buf = 0;
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        default:
            break;
        }

        bridge_setup_buf = 0;

#pragma endregion

        // 직접 통신
        if (mode == 1 || mode == 2)
        {
            // 가상화 된 통신
            if (mode == 2)
            {
            }
        }
        // 라우터
        else if (mode == 3)
        {
        }
        // 미정의 된 기능
        else if (mode == 4)
        {
        }
        else
        {
            // Undefined func
        }
    }

    return 0;
}

int debug_main(void)
{
    uint8_t mode = 0;

    write(0, "%s", "debug main\n");

    uint8_t bridge_setup_buf = 0;

    kernel_setup(&bridge_setup_buf, 1);

    write(0, "%s", "\ndebug inf loop\n");

    while (1)
    {
        uint8_t buf[64];

        if ((bridge_setup_buf & 0b1111) == 3)
        {
            ipc_rece(buf);
            // 수신 완료 처리
            bridge_setup_buf = 0;
        }

        for (int i = 0; i < 100000000; i++)
        {
            ;
        }
    }

    return 0;
}

void bridge_skeleton()
{
    /*
        딱히 시작 소개 문구는 없음
    */

    while (1)
    {
        // setup 처리
        // 처리중에 mode 변수를 설정함
        uint8_t mode = 0;

        // 다이렉터 통신 기능
        if (mode < 3)
        {
            /*
                패킷을 받아서 단계적으로 까기
            */

            // 가상화 있는 통신 기능
            if (mode == 2)
            {
                // 가상화 된 외부 출력
            }

            /*
                ip 처리 로직
            */

            /*
                tcp 처리 로직
            */

            // 그외 등등의 처리로직
        }
        // 라우터 기능
        else if (mode == 3)
        {
        }
        // 미정의 된 기능
        else if (mode == 4)
        {
        }
    }
}