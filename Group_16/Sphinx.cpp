#include "Sphinx.h"

/*struct Stats
    1. MaxHP = 200;
    2. HP = 200;
    3. MaxMP = 100;
    4. MP = 100;

    5. Attack = 30;
    6. Defense = 50;
    7. Speed = 10;
    8. Crit = 5;

    9. Exp = 0;
    10. Level = 1;
*/

Sphinx::Sphinx()
    :Monster("스핑크스", Stats{ 99999,99999,99999,99999,99999,99999,10,5,95,1 }) { }

void Sphinx::EncounterMessage()
{
    for (int i = 0; i < 15; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n\n\n\n\n왠지 몹시 피곤해 보이는 스핑크스를 만났다. 내가 더 피곤하게 만들것 같다." << std::endl;
}

void Sphinx::Skill01()//이건 마지막의 스핑크스 대사로 넣으면 좋을듯...?
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << " 『                                    " << std::endl;
    std::cout << "      \"너라면 믿고 잘 수 있겠어...\"    " << std::endl;
    std::cout << "       \"피곤하던 차에 즐거웠다...\"     " << std::endl;
    std::cout << "               \"...\"                " << std::endl;
    std::cout << "                  .                   " << std::endl;
    std::cout << "                  .                   " << std::endl;
    std::cout << "                  .                   " << std::endl;
    std::cout << "            [정적이 흐른다]             " << std::endl;
    std::cout << "                                      " << std::endl;
    std::cout << "                                      " << std::endl;
    std::cout << "                                     』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 15; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }
    //컨셉유지로 대사색을 입힘
    /*1) 쉬움

    Q1. C/C++에서 함수를 호출(Call)한다는 의미로 가장 알맞은 것은?

    1. 함수의 내용을 “작성”한다
    2. 함수 이름과 인자값을 적어서 “실행”되게 한다
    3. 함수의 반환형을 바꾼다
    4. 함수 이름을 주석 처리한다*/
    std::cout << "\n\n\n\n\n자, 첫 질문이다. 처음이니 쉬운 문제로 가도록 하겠다." << std::endl;// 이대사 출력전에 뭔가 있기는 해야 할 듯... 좀 뜬금 없긴 한 것 같음
    std::cout << "나그네여 여기서 배운 C언어와 C++에서 함수를 호출(Call) 한다는 의미로 가장 알맞은 것 은 무엇이냐.\n" << std::endl;
    std::cout << "1. 함수의 내용을 “작성”한다." << std::endl;
    std::cout << "2. 함수 이름과 인자값을 적어서 “실행”되게 한다." << std::endl;
    std::cout << "3. 함수의 반환형을 바꾼다." << std::endl;
    std::cout << "4. 함수 이름을 주석 처리한다." << std::endl;
    std::cout << "\n선택: ";
    std::cin >> Choice;

    if (Choice == 2)
    {
        std::cout << "맞췄을 때 이벤트" << std::endl;
    }
    else
    {
        std::cout << "\"여긴 너가 올 수 있는 곳이 아니다\"" << std::endl;
    }
}

void Sphinx::EncounterMessage()
{
    for (int i = 0; i < 15; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n\n\n\n\n왠지 몹시 피곤해 보이는 스핑크스를 만났다. 내가 더 피곤하게 만들것 같다." << std::endl;
}

void Sphinx::Skill02()
{
    int Choiec;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << " 『                                    " << std::endl;
    std::cout << "      \"너라면 믿고 잘 수 있겠어...\"    " << std::endl;
    std::cout << "       \"피곤하던 차에 즐거웠다...\"     " << std::endl;
    std::cout << "               \"...\"                " << std::endl;
    std::cout << "                  .                   " << std::endl;
    std::cout << "                  .                   " << std::endl;
    std::cout << "                  .                   " << std::endl;
    std::cout << "            [정적이 흐른다]             " << std::endl;
    std::cout << "                                      " << std::endl;
    std::cout << "                                      " << std::endl;
    std::cout << "                                     』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    /*2) 중간
    
    Q2. 아래 중 “함수 선언(Declaration)이자 정의(Definition)” 형태로 가장 알맞은 것은?
 
     1. `int add(int a, int b);`
     2. `int add(int a, int b) { return a + b; }`
     3. `return a + b;`
     4. `add(1, 2);`  */

    std::cout << "\n\n\n\n\n좋다, 아직 갈길이 멀다,나그네여." << std::endl;
    std::cout << "다음 문제다, 다음 함수중 “함수 선언(Declaration)이자 정의(Definition)” 형태로 가장 알맞은 것은 무엇 이냐\n" << std::endl;
    std::cout << "1. `int add(int a, int b);`" << std::endl;
    std::cout << "2. `int add(int a, int b) { return a + b; }`" << std::endl;
    std::cout << "3. `return a + b;`" << std::endl;
    std::cout << "4. `add(1, 2);`" << std::endl;
    std::cout << "선택: ";
    std::cin >> Choiec;

    if (Choiec == 2)
    {
        std::cout << "맞췄을 때 이벤트" << std::endl;
    }
    else
    {
        std::cout << "\"아쉽구나.\"" << std::endl;
    }
}

void Sphinx::EncounterMessage()
{
    for (int i = 0; i < 15; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n\n\n\n\n왠지 몹시 피곤해 보이는 스핑크스를 만났다. 내가 더 피곤하게 만들것 같다." << std::endl;
}


void Sphinx::Skill03()
{
  
  int Choice;
  std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(1200));
  std::cout << " 『                                    " << std::endl;
  std::cout << "      \"너라면 믿고 잘 수 있겠어...\"    " << std::endl;
  std::cout << "       \"피곤하던 차에 즐거웠다...\"     " << std::endl;
  std::cout << "               \"...\"                " << std::endl;
  std::cout << "                  .                   " << std::endl;
  std::cout << "                  .                   " << std::endl;
  std::cout << "                  .                   " << std::endl;
  std::cout << "            [정적이 흐른다]             " << std::endl;
  std::cout << "                                      " << std::endl;
  std::cout << "                                      " << std::endl;
  std::cout << "                                     』" << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(1200));
  std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;
   
     for (int i = 0; i < 15; ++i)
     {
         std::cout << '.' << " ";
         std::cout.flush();
         std::this_thread::sleep_for(std::chrono::milliseconds(600));
     }
     /*3) 중간  

Q3. 다음 중 함수 오버로딩(Overloading)이 “유효해지는” 경우로 알맞은 것은?

1. 함수 이름은 같고 매개변수 타입이 다르다  
2. 함수 이름은 다르고 반환형만 같다  
3. 함수 이름은 같고 반환형만 다르다  
4. 함수 이름, 매개변수, 반환형이 전부 같다 */

     std::cout << "\n\n\n\n\n좋다! 바로 다음 문제다!" << std::endl;
     std::cout << "다음 중 함수 오버로딩(Overloading) “유효해지는” 경우로 알맞은 것은 무엇이느냐\n" << std::endl;
     std::cout << "1. 함수 이름은 같고 매개변수 타입이 다릅니다." << std::endl;
     std::cout << "2. 함수 이름은 다르고 반환형만 같습니다." << std::endl;
     std::cout << "3. 함수 이름은 같고 반환형만 다릅니다." << std::endl;
     std::cout << "4. 함수 이름, 매개변수, 반환형이 전부 같습니다." << std::endl;
     std::cout << "\n선택: ";
     std::cin >> Choice;

     if (Choice == 1)
     {
         std::cout << "맞췄을 때 이벤트" << std::endl;
     }
     else
     {
         std::cout << "\"아직 준비가 더 필요해 보이는구나\"" << std::endl;
     }
}

void Sphinx::EncounterMessage()
{
    for (int i = 0; i < 15; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n\n\n\n\n왠지 몹시 피곤해 보이는 스핑크스를 만났다. 내가 더 피곤하게 만들것 같다." << std::endl;
}


void Sphinx::Skill04()
{
   int Choice;
   std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
   std::this_thread::sleep_for(std::chrono::milliseconds(1200));
   std::cout << " 『                                    " << std::endl;
   std::cout << "      \"너라면 믿고 잘 수 있겠어...\"    " << std::endl;
   std::cout << "       \"피곤하던 차에 즐거웠다...\"     " << std::endl;
   std::cout << "               \"...\"                " << std::endl;
   std::cout << "                  .                   " << std::endl;
   std::cout << "                  .                   " << std::endl;
   std::cout << "                  .                   " << std::endl;
   std::cout << "            [정적이 흐른다]             " << std::endl;
   std::cout << "                                      " << std::endl;
   std::cout << "                                      " << std::endl;
   std::cout << "                                     』" << std::endl;
   std::this_thread::sleep_for(std::chrono::milliseconds(1200));
   std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

   for (int i = 0; i < 15; ++i)
   {
       std::cout << '.' << " ";
       std::cout.flush();
       std::this_thread::sleep_for(std::chrono::milliseconds(600));
   }

   /*4) 어려움  

Q4. 다음 중 C++에서 “반환 타입만 다른” 함수 오버로딩이 불가능한 이유로 가장 알맞은 것은?
1. 반환형은 무조건 void여야 한다  
2. C++은 함수 이름만으로만 함수를 구분한다  
3. 호출할 때 반환형 정보만으로 어떤 함수를 부를지 결정할 수 없어서 애매해진다  
4. 반환형이 다르면 무조건 템플릿을 써야 한다*/

   std::cout << "\n\n\n\n\n생각보다는 바보는 아니로구나...어쩌면......" <<std::endl;
   std::cout << "...각설하고 마지막 문제다." <<std::endl;
   std::cout << "다음 중 C++에서 “반환 타입만 다른” 함수 오버로딩이 불가능한 이유로 가장 알맞은 것을 고르거라.\n" <<std::endl;
   std::cout << "1. 반환형은 무조건 void여야 한다." << std::endl;
   std::cout << "2. C++은 함수 이름만으로만 함수를 구분한다." << std::endl;
   std::cout << "3. 호출할 때 반환형 정보만으로 어떤 함수를 부를지 결정할 수 없어서 애매해진다." << std::endl;
   std::cout << "4. 반환형이 다르면 무조건 템플릿을 써야 한다." <<std::endl;
   std::cout << "선택: ";
   std::cin >>  Choice;

   if (Choice == 3)
   {
       std::cout << "맞췄을 때 이벤트" << std::endl;
   }
   else
   {
       std::cout << "\"잘 못 본것같구나\"" << std::endl;
   }
}
