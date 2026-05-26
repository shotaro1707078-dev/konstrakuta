
#include <iostream>


class Player
{
    
public:

	std::string Name;


int HP;

    //コンストラクタ
    Player()
		:Player("Default", 100)
    {

    }


    Player(std::string name, int hp) 
        :Name(name), HP(hp)
    {
	}

};



int main()
{
    Player player1;
    Player playre2("勇者", 200);


	std::cout << "Name:" << player1.Name << ",HP:" << player1.HP << std::endl;
    std::cout << "Name:" << playre2.Name << ",HP:" << playre2.HP << std::endl;
}

