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


void DungeonManager::MovePlayer(Player& player, DiceSystem& dice) {

    int steps = dice.ThrowDice();

    std::cout << "[+] 주사위를 굴려 " << steps << "칸 이동합니다!" << std::endl;

    currentPos += steps;

    if (currentPos > goalPos) {
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

    std::cout << "현재 위치: " << currentPos << " / " << goalPos << std::endl;

    // 1. 5칸마다 보스 조우 체크 (0번 칸 제외를 위해 currentPos > 0 추가)
    if (currentPos > 0 && currentPos % 5 == 0) {

        TriggerBossEvent(player);
    }
    // 2. 일반 칸일 경우 랜덤 이벤트 발생
    else {
        ProcessRandomEvent(player, dice);
    }
}


void DungeonManager::ProcessRandomEvent(Player& player, DiceSystem& dice) {

    std::cout << "* 던전을 탐색합니다[다이스]" << std::endl;

    int eventSeed = dice.RollDice(); // 주사위 값에 따라 이벤트 분기

    if (eventSeed <= 2) {
        std::cout << "[!] 몬스터를 만났습니다! 전투를 시작합니다." << std::endl;
        // 여기서 팀원이 만든 Monster 생성 및 BattleManager 호출
    }
    else if (eventSeed == 3) {
        std::cout << "[*] 보물상자를 발견했습니다! 체력이 회복됩니다." << std::endl;
    }
    else {
        std::cout << "[...] 아무 일도 일어나지 않았습니다. 계속 전진합니다." << std::endl;
    }
}


void DungeonManager::TriggerBossEvent(Player& player) {
    std::cout << "\n[!!!] 일반적이지 않은 몬스터의 기운이 느껴집니다!" << std::endl;

    // 팀원이 만든 BossMonster 생성 (예시)
    // BossMonster* boss = new BossMonster("대악마", bossStats);

    // 전투 매니저 호출 로직을 여기에 작성하세요.
    // battleManager.StartBattle(player, boss);
}
