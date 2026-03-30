#pragma once
#include <iostream>
#include <random> //난수 생성을 위한 라이브러리
#include <thread> //애니메이션 효과(시간지연) 라이브러리
#include <chrono> //시간 단위를 다루기 위한 라이브러리

class DiceSystem
{
private:
    //난수 생성을 위한 엔진과 분포 설정
    std::random_device rd; //무작위 랜덤 시드를 생성
    std::mt19937 gen; //가져온 시드에서 난수를 뽑아냄
    std::uniform_int_distribution<int> dis; //생성된 난수를 균등한확률로 배치
public:
    //주사위 생성자
    DiceSystem();

    //주사위를 굴릴때 연출
    int RollDice();
    //주사위를 굴리고 결과를 반환하는 함수
    int ThrowDice();
};


