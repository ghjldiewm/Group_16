#include "DungeonManager.h"
#include "MonsterList.h"

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
DungeonManager::DungeonManager(UIManager& ui) {
    ui.DrawTitleScreen(); // 필요할 때 화면 그리기
}

void TypeMessage(const std::string& message, int delayMs = 50)
{
    for (char c : message)
    {
        std::cout << c << std::flush; // 한 글자 출력 후 즉시 화면에 반영
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
    }
    std::cout << std::endl; // 문장이 끝나면 줄바꿈
}

void DungeonManager::Gathering(Player& player, DiceSystem& dice)
{
    //std::cout << "채집을 하러 뒷산에 왔습니다." << std::endl;
    TypeMessage("채집을 하러 뒷산에 왔습니다.");
    int result = dice.RollDice();

    if (result <= 3)
    {
        //잡템 
        player.GetInventory()->AddItem(1, 100);
        //std::cout << "돈 100원을 얻었습니다." << std::endl;
        TypeMessage("돈 100원을 얻었습니다.");
    }
    else
    {
        //쓸만한템
        player.GetInventory()->AddItem(1, 300);
        //std::cout << "돈 300원을 얻었습니다." << std::endl;
        TypeMessage("돈 300원을 얻었습니다.");
    }

}

void DungeonManager::StatsBoost(Player& player)
{
    //std::cout << "코딩신의 가호를 받아 능력치가 상승했습니다!" << std::endl;
    TypeMessage("코딩신의 가호를 받아 능력치가 상승했습니다!");

    player.AddAttack(5);
    player.AddDefense(5);

    TypeMessage("공격력 +5 / 방어력 +5");
    player.PrintStatus(); 

}

void DungeonManager::TreasureBox(Player& player)
{
    //std::cout << "숨겨진 보물상자를 발견했습니다!!" << std::endl;
    TypeMessage("숨겨진 보물상자를 발견했습니다!!");

    for (int i = 0; i < 2; ++i)
    {
        std::cout << "달그락" << " ";
        std::cout.flush(); //버퍼에 쌓지않고 그때그때 출력하게 해줌
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    //std::cout << "상자 안에서 '두쫀쿠'를 발견했습니다!" << std::endl;
    TypeMessage("상자 안에서 '두쫀쿠'를 발견했습니다!");
    player.GetInventory()->AddItem(10, 400);

}



    // 팀원이 만든 BossMonster 생성 (예시)
    // BossMonster* boss = new BossMonster("대악마", bossStats);

    // 전투 매니저 호출 로직을 여기에 작성하세요.
    // battleManager.StartBattle(player, boss);

