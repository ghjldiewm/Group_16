#include "DungeonManager.h"


// 최대 다이스 굴리는 횟수 고정
// 1~6까지의 이벤트 발생 고정
// int count -> 10번 굴리기
// 초반 이벤트 / 중반 이벤트 / 후반 이벤트

// 1~6: 
// 1: 강한 몬스터
// 2: 일반 몬스터
// 3: 쉬운 몬스터
// 4: 채집(재료 수집) 이벤트
// 5: 스탯 상승 이벤트
// 6: 보물 상자

// 난이도 3개로 나누기 -> switch case
// 

// <  >
// 기본적인 경험치 제공 -> 몬스터 처지시 추가 경험치 제공
// 

// 주사위 3번 굴린 이후 이벤트 4번째 이벤트 (상점, 휴식 장소 고정)
// 주사위 굴린 만큼의 난이도 상승(조절)
// 상점 -> 시세에 따라..?
// 할인 이벤트

void DungeonManager::Gathering(Player& player, DiceSystem& dice)
{
    std::cout << "채집을 하러 뒷산에 왔습니다." << std::endl;
    int result = dice.RollDice();

    if (result <= 3)
    {
        //잡템 
    }
    else
    {
        //쓸만한템
    }

}

void DungeonManager::StatsBoost(Player& player)
{
    std::cout << "코딩신의 가호를 받아 능력치가 상승했습니다!" << std::endl;

    /*player.Status.Attack += 10;
    player.Defense += 10;*/ 
    //스텟상승 어떻게 시킵니까??

    void PrintStatus(); //이건 왜 작동 안하지..
}

void DungeonManager::TreasureBox(Player& player)
{
    std::cout << "숨겨진 보물상자를 발견했습니다!!" << std::endl;

    for (int i = 0; i < 2; ++i)
    {
        std::cout << "달그락" << " ";
        std::cout.flush(); //버퍼에 쌓지않고 그때그때 출력하게 해줌
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "상자 안에서 '두쫀쿠'를 발견했습니다!" << std::endl;
}

void DungeonManager::MovePlayer(Player& player, DiceSystem& dice)
{
    std::cout << "현재 주사위Count: " << countDice << std::endl;
   
    int steps = dice.ThrowDice();
    if (steps == 0)
    {
        std::cout << "이동을 취소합니다." << std::endl;
        //다시 메뉴선택을 할 수있게 (인벤을 확인하던지 스텟을 확인하던지)
        return;
    }
    else
    {
        std::cout << "[+] 이동중..." << std::endl;
        countDice++;
        player.GetExperience(30); //경험치 양은 추후 조절
    }

    if (countDice < 3)
    {
        switch (steps)
        {
        case 1:
            //일반 몬스터
            break;
        case 2:
            //쉬운 몬스터
            break;
        case 3:
            //쉬운 몬스터
            break;
        case 4:
            Gathering(player, dice); 
            break;
        case 5:
            StatsBoost(player);
            break;
        case 6:
            TreasureBox(player);
            break;
        } 
    }
    if (3 <= countDice && countDice < 6)
    {
        switch (steps)
        {
        case 1:
            //일반 몬스터
            break;
        case 2:
            //일반 몬스터
            break;
        case 3:
            //쉬운 몬스터
            break;
        case 4:
            Gathering(player, dice);
            break;
        case 5:
            StatsBoost(player);
            break;
        case 6:
            TreasureBox(player);
            break;
        }
    }
    if (6 <=countDice &&countDice < 9)
    {
        switch (steps)
        {
        case 1:
            //강한 몬스터
            break;
        case 2:
            //일반 몬스터
            break;
        case 3:
            //일반 몬스터
            break;
        case 4:
            Gathering(player, dice);
            break;
        case 5:
            StatsBoost(player);
            break;
        case 6:
            TreasureBox(player);
            break;
        }
    }
       
    if (countDice == 10)
    {
        std::cout << "\n[WARNING!] 강력한 보스의 기운이 느껴집니다!" << std::endl;
        // 추후에 보스 나오면 수정할 부분.
        // 
        int yourFate = dice.ThrowDice();
        if (yourFate == 1)
        {
            std::cout << "[X] You're Dead!" << std::endl;
        }
        else if (yourFate <= 4)
        {
            std::cout << "무찌르지 못했으나, 어떻게든 앞으로 나아갔습니다.." << std::endl;
            std::cout << "🏁 던전 끝에 도달했습니다!" << std::endl;
        }
        else
        {
            std::cout << "무사히 보스를 무찔렀습니다!" << std::endl;
            std::cout << "🏁 던전 끝에 도달했습니다!" << std::endl;
        }
        return;
    }

       
        
}



    // 팀원이 만든 BossMonster 생성 (예시)
    // BossMonster* boss = new BossMonster("대악마", bossStats);

    // 전투 매니저 호출 로직을 여기에 작성하세요.
    // battleManager.StartBattle(player, boss);

