# CH2 팀 프로젝트 - 16조
팀명: 두쫀쿠<br/>
팀원: 조현흠 / 권태영 / 김태욱 / 류시아 / 정지석 / 이경환

## 프로젝트 소개
Text-Console RPG 제작

### 개발 환경
Visual Studio 2022

## 프로젝트 구조


## 핵심 로직 설명

# [프로젝트명] (C++ Console Battle Prototype)

한 줄 소개: `Unit` 기반 상속 구조로 Player/Monster 전투 로직(데미지/사망/스탯)을 구현한 C++ 콘솔 프로젝트

## Demo

- 콘솔 실행 예시
    - [여기에 출력 로그 5~15줄 정도 붙이기]
- GIF / 스크린샷
    - `./docs/demo.png` (이미지 파일 넣었다면 링크)

## 핵심 기능

- `Unit` 공통 전투 기능
    - AttackTarget → CalculateDamage → TakeDamage 흐름
    - HP 0 처리 및 사망 상태 관리
- 구조체로 Stats 관리
    - Player/Monster에게 상속될 Stats를 `Unit`에서 선언 및 기본스탯 추가
- Monster 계층
    - `Monster`(공통 보상/기본 로직) + `Normal/Elite/Boss`(스탯 차등)

## 설계 의도(Why)

### 1) Status만 운영할 때의 장단점

- 장점: 구조가 단순해서 구현/디버깅이 쉬움
- 단점: “전투 종료 후 원상복구”, “버프/디버프 해제” 같은 걸 하려면 원래 값이 없어서 복구가 어려움
    - 이 경우는 보통 “버프 전 값 저장”을 따로 하거나, “전투 시작 시 재생성”으로 해결 가능

### 2) Unit을 부모로 둔 이유

- Player/Monster가 공유하는 “피해 처리 / 사망 판정 / 상태 출력”을 한 곳에 모아 중복 제거
- 향후 새로운 유닛 타입 추가 시 확장 용이

### 3) (수정 필)ex. Monster를 Normal/Elite/Boss로 분리한 이유

- ex. 타입별 스탯/보상/특수 패턴을 독립적으로 확장 가능
- ex. 생성자에서 스탯 초기화가 명확해 테스트가 쉬움

## 전투 규칙(How)

- 데미지 공식(기본):
    - `damage = attacker.Attack - target.Defense`
    - 최소 데미지 1 보정
- 사망 처리:
    - `Status.HP <= 0` → `HP = 0`, `bIsDead = true`

## 프로젝트 구조

- main.cpp
- Stats.h
- Unit.h / Unit.cpp
- Monster.h / Monster.cpp
- ex.몬스터종류 추가

## 실행 방법

### Visual Studio

1. `[프로젝트.sln]` 실행
2. `Ctrl + F5` (디버그 없이 실행)

## 트러블슈팅 & 배운 점

- `Unit` 클래스에서 사용된 구조체 `Stats`을 파생 클래스 생성자에서 값 변경
- “사망 상태”는 HP만으로 판단하지 않고 `bIsDead`로 명시

## 앞으로 개선할 점

- 크리티컬 확률(`Crit`) 반영
- 속도(`Speed`) 기반 선공/턴 결정
- 랜덤 스탯/드랍을 위한 `random` 유틸 추가
- 단위 테스트(데미지 최소 1, 사망 처리 등)
