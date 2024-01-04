#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int rand_number;// random number global variable
int choice_exit;
string warrior_inventory = "";
string mage_inventory = "";
string rogue_inventory = "";
struct {   //structure declaring for character properties
	string name = "";
	string type;
	string gender;
	string companion;
	int health = 100;
	int xp = 0;
	int level = 0;
}character;

struct {   //structure declaring for enemy health
	int enemyHealth = 100;
}enemy_health;
void characterName();
void characterInfo();
void characterChoice1();
void characterChoice2();
void characterChoice3();
void warrior();
void warriorBattle1();
void warriorScene1();
void warrior_quest1();
void warrior_quest2();
void warrior_quest3();
void warrior_quest4();
void mage();
void mage_quest1();
void mage_quest2();
void mage_quest3();
void mage_quest4();
void mage_quest5();
void rogue();
void rogueQuest1();
void rogueQuest2();
void rogueQuest3();
void exit_game();
void rng() {
	int x = time(0);
	srand(x);
	rand_number = 1 + rand() % 100;
}
void enemy_attack(int a, int b, int c, int d)
{
	rng();   // fuction call
	if (rand_number >= a && rand_number <= b)
	{
		cout << "\nStruck by the enemy's blow, your health diminishes in their ruthless attack!\n Your remaining health:";
		character.health -= 10;
		cout << character.health;
		cout << endl;
	}
	else if (rand_number >= c && rand_number <= d)
	{

		cout << "\nEnemy attacked but you deflected their assault \nYour remaining health is: ";
		cout << character.health;
		cout << endl;
	}
}

void characterName()
{
	string character_name;
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "Name your character:";
	getline(cin, character_name);
	character.name = character_name;
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}
void characterInfo()
{
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	cout << "\nName: " << character.name << "\t" << "\nClass: " << character.type << "\t" << "\nCompanion: " << character.companion << "\t" << "\nGender: " << character.gender << endl << "Health: " << character.health << "\t" << "\nXP: " << character.xp << "\t" << "\nLevel: " << character.level << "\n \n";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

}
void characterChoice1()
{
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	cout << "You chose " << character.name << ", a mighty Warrior of the kingdom of Eldoria belonging to the noble tribe of warriors and knights, Valorin. "
		<< character.name << " is the son of Achilles, Head of the tribe of Valorin, the most heroic warrior of the kingdom of Eldoria, and the King's best companion.\n";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

}
void characterChoice2()
{
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	cout << "You chose a mystical Mage. In Eldoria's enchanted realm, " << character.name << " Stormshaper carries the revered mantle of the Stormweaver legacy. For 500 years, her lineage of royal mages has guarded the mystical prosperity flowing from the Mystic Veil. " << character.name << " commands powers of levitation, curses, shields, fire magic, wielding a wand as her support Item. Her loyal owl, a silent companion, and a magical spellbook accompany her on this journey, where the threads of the Stormweaver legacy entwine with the arcane rhythms of Eldoria.";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

}
void characterChoice3() {
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	cout << "You've chosen the path of the rogue with" << character.name << "'s story. In the neighboring state to Eldoria, " << character.name << ", a cunning rogue, faced devastation when dragons decimated his homeland. Seeking refuge in Eldoria, tragedy struck again as ogres slaughtered his family near the kingdom's borders. Saved by the king's guards, he grew up among the Eldorian tribe, honing his skills in stealth and combat, driven by a singular purpose: vengeance against the ogres. Focusing on training and fueled by a quest to save innocents, " << character.name << " infiltrated the castle, adopting the guise of a servant on a relentless mission of retribution.";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}

void warrior()
{
	character.companion = "Horse(Ember)\n";
	character.type = "Warrior\n";
	character.gender = "Male\n";
	characterInfo();
	warriorScene1();
	warriorBattle1();
	int i;
	cout << endl;
	cout << "As you sprint towards the heart of the battlefield, the deafening roar of dragons fill the air as you swiftly evade their attacks.\nYou see the brutal sight of your fallen comrades, it fills your heart with rage.\nAmidst the carnage, a heart - wrenching sight grips your attention—a towering Oni locked in combat with your father.\nYou rush to aid your father in the battle with the monstrous Oni.Despite your swift approach, fate dealt a cruel hand—the battle's intensity claimed a heavy toll. \n In a tragic turn, your father valiantly battling the towering Oni, fell in the heat of the conflict.The sight of your father being defeated boils your blood.[You]:\" I SWEAR ILL GET REVENGE. REMEMBER MY NAME ONI, I AM ORION, SON OF ACHILLES, I WILL DEFEAT WHOEVER SENT YOU\".The Oni commands the army to leave at once, they all disperse within moments, leaving the remains of the destruction behind.";

	cout << "\ntype 1 to investigate";
	cin >> i;
	cin.ignore();
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	if (i == 1) {
		cout << "You start to look around for any information you can find. Suddenly you find a soldier, on the brink of death. You rush towards him.\n[Soldier]: whispers" << character.name << "go to the Sanctum of Eternity...meet with the spirit there..her name is  Astraea ...she will tell you everything.\nYou nod and hold the soldier's hand until his last breath.\nWith determination, you set out on a journey with the motive of eradicating the evils that looms over Eldoria.\n";
	}
	else {
		cout << endl;
		cout << "invalid input";
	}
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n Do you want to continue the game with QUEST 1? /n press 1 to continue:";
	cin >> i;
	if (i == 1) {
		warrior_quest1();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1)
		{
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "\n Do you want to continue the game with QUEST 2? /n press 2 to continue:";
	cin >> i;
	if (i == 2) {
		warrior_quest2();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "\n Do you want to continue the game with QUEST 3? /n press 3 to continue:";
	cin >> i;
	if (i == 3) {
		warrior_quest3();
	}
	else {
		cout << "exiting game";
	}
	cout << "\n Do you want to continue the game with QUEST 4? /n press 4 to continue:";
	cin >> i;
	if (i == 4) {
		warrior_quest4();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
}
void mage()
{
	int i = 0;
	character.companion = "Owl(Hedwig)\n";
	character.type = "Mage\n";
	character.gender = "Female\n";

	characterInfo();
	cout << "The messenger stood at the doorway, his presence commanding attention. With a respectful bow, he conveyed the urgency of the message.\n";
	cin.ignore();
	cout << "[Messenger]: Esteemed " << character.name << ", the mighty King summons you urgently to the royal court. His Highness requests your immediate audience in matters of great importance. The kingdom awaits your presence.";
	cin.ignore();
	cout << "\nThe gravity of the message hung in the air, leaving you with a sense of anticipation and a myriad of thoughts about the nature of the urgent summons. As you make your way to the royal court, the corridors echo with a palpable tension, and the weight of responsibility settles upon your shoulders. What awaits in the king's court, only time will reveal.\n";
	cin.ignore();
	cout << "As You enter the grand throne room, the air is heavy with anticipation. The king, seated on his throne, looks troubled. As you approach him, he gestures for you to come closer.";
	cout << "\n[King]: Thalia Stormshaper, the kingdom is in dire straits, and I call upon your arcane prowess in this desperate hour.\n" << "[You]: Your Majesty, how may I be of service?\n" << "[King]: (with a heavy sigh) It brings me great sorrow to inform you that my beloved children, the prince, and princess, are kidnapped from the very heart of the castle." << "\n[You]: (visibly concerned) Kidnapped? By whom, Your Majesty?" << "\n[King]: I am not aware." << "\n[You]: (you nod solemnly) I understand the gravity of the situation, Your Majesty. What would you have me do?" << "\n[King]: (with determination) Thalia Stormshaper, I hereby entrust upon you the mystical forces of the kingdom. You are our last hope. The fate of Eldoria rests in your hands." << "\n[Thalia]: I accept this responsibility, Your Majesty. What is my task" << "\n[King]: You must embark on a perilous quest to the Willow Tree. The mystical tree will guide you on your quest." << "\n[You]: (bowing) I shall not falter, Your Majesty. Eldoria shall see the return of its prince and princess.\n";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n Do you want to continue the game with QUEST 1? /n press 1 to continue:";
	cin >> i;
	if (i == 1) {
		mage_quest1();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "\n Do you want to continue the game with quest 2? \n press 2 to continue:";
	cin >> i;
	if (i == 2) {
		mage_quest2();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "\n Do you want to continue the game with QUEST 3? \n press 3 to continue:";
	cin >> i;
	if (i == 3) {
		mage_quest3();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "\n Do you want to continue the game with QUEST 4? /n press 4 to continue:";
	cin >> i;
	if (i == 4) {
		mage_quest4();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "\n Do you want to continue the game with QUEST 5? /n press 5 to continue:";
	cin >> i;
	if (i == 5) {
		mage_quest5();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
}
void rogue() {
	int i = 0;
	character.companion = "Eagle";
	character.type = "Rogue";
	character.gender = "Male";
	characterInfo();
	cout << "\n Do you want to continue the game with QUEST 1? press 1 to continue:";
	cin >> i;
	if (i == 1) {
		rogueQuest1();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "\n Do you want to continue the game with QUEST 2? press 2 to continue:";
	cin >> i;
	if (i == 2) {
		rogueQuest2();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "\n Do you want to continue the game with QUEST 3?  press 3 to continue:";
	cin >> i;
	if (i == 3) {
		rogueQuest3();
	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
}

int main()
{
	int character_choice;   //variable declaration
	string choice;

	do
	{
		cout << "--------------The Chronicles of Eldoria: A Tale of 3 Legends----------------\n"
			"Welcome to the Kingdom of Eldoria, a land of adventures and Legends\n"
			"Choose your Character:\n"
			"1. A brave Warrior\n"
			"2. A Mystical Mage\n"
			"3. A stealthy Rogue\n";
		cin >> character_choice;
		cin.ignore();
		characterName();
		if (character_choice == 1) {
			characterChoice1();
		}
		else if (character_choice == 2) {
			characterChoice2();
		}
		else if (character_choice == 3) {
			characterChoice3();
		}
		else {
			cout << "Invalid input";
		}
		cout << "Press any key to Continue and B to go back to character creation: ";
		cin >> choice;
	} while (choice == "B" || choice == "b");

	if (character_choice == 1) {
		warrior();
	}
	else if (character_choice == 2) {
		mage();
	}
	else if (character_choice == 3) {

		rogue();
	}
	else {
		cout << "Invalid";
	}
	system("pause");
	return 0;
}
void exit_game()
{
	char quit;
	cout << "enter q to quit game and press any key to continue:";
	cin >> quit;
	if (quit == 'q' || quit == 'Q')
	{
		cout << "exiting game.........";
		exit(0);
	}
}
void warriorBattle1()      //function for scene2 of warrior
{
	cout << "BATTLE : WITH OGRE \n";
	cout << "difficulty level = intermediate\n";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();

	cout << "\nYou hop on your trusted horse and join the ferocious battle thats unfolding before you. \nAmidst the chaos, a formidable ogre looms before you, its towering presence a stark challenge.\nThe ogre aims his mighty axe towards you.\nQUICK!Counter his attack!";
	cout << endl;
	while (character.health > 0 && enemy_health.enemyHealth > 0)
	{
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\nChoices: \n";
		int choice;
		cout << "1.Brute Force\n2.Stab\n3.Shield Bash ";
		cin >> choice;
		if (choice == 1) {
			rng();

			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit) Channeling raw strength, you decide to unleash a powerful, overhead strike, aiming to deliver a bone-crushing blow to the ogre. ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit) Oh no! That didnt work! Try again!";
				character.health -= 10;
				cout << "Your remaining health: " << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else
				cout << "Invalid number:";
		}
		else if (choice == 2)
		{
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit) Focusing on precision, you lunge forward, aiming your blade for a well-aimed thrust at the ogre's vulnerable points, seeking to disable it swiftly.";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "\nEnemy health: " << enemy_health.enemyHealth;

				cin.ignore();
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit) You missed, try again!\nYour remaining health: ";
				character.health -= 10;
				cout << "Your remaining health: " << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cin.ignore();
				// enemy's turn
				enemy_attack(1, 40, 41, 100);

			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else
				cout << "Invalid number:";
		}
		else if (choice == 3)
		{
			rng();

			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit) Raising your shield, you deflect the ogre's incoming assault, using the opening to retaliate with a forceful bash, attempting to disrupt its balance. ";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit) You missed, try again\n your remaining health is: ";
				character.health -= 10;
				cout << "Your remaining health: " << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cin.ignore();
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage!\n ";
				enemy_health.enemyHealth -= 40;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cin.ignore();
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else
				cout << "Invalid number:";
		}
		else {
			cout << "Invalid Input: Try 1, 2 or 3";
			warriorBattle1();
		}
	}//while 
	if (enemy_health.enemyHealth <= 0)
	{
		cout << "\nYou have defeated your enemy, Great Job!";
		if (character.xp >= 25) {
			character.level++;
			cout << "Level Upgraded!\n Your new level is =" << character.level;
			cout << "\n enter 1 to exit:";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				warriorBattle1();
			}
		}

	}
	else if (character.health <= 0) {
		cout << "\nOh no...You died :(";
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			warriorBattle1();
		}
	}
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}


void warriorScene1()    //function for scene1 of warrior
{
	int choice = 0;
	int choice1;
	cout << "Type 1 to continue:";
	cin >> choice1;
	while (choice != 1 && choice != 2)
	{
		cout << "\nAs your eyes slowly open, the familiar sight of your room's ceiling comes into view. A foreboding unease gnaws at your gut, and a chill hangs heavy in the air. \nWith a swift motion, you unlatch the window, inviting the crisp freshness of the outside world to dispel the room's stagnant atmosphere.\nYet, an abrupt intrusion shatters this tranquility—the acrid scent of smoke wafts in, jolting you from your dazed state. \nYour senses on high alert, you pivot, scanning your surroundings for the source of this ominous omen. \nThere, to the south, a menacing blaze paints the sky with its infernal glow, a clear sign of a brutal conflict unfolding." << endl;
		cin.ignore();
		cout << "\nWhat do you do?\n1.Rush downstairs to investigate the source of the fire.\n2.Grab essential belongings before heading out to aid those in need";
		cin >> choice;
		if (choice == 1) {
			cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			cout << "You rush downstairs to investigate. As you step outside into the battlefield your heart sinks at the sight that meets your eyes—a ferocious battle unfolding before you.\nYou see your people outnumbered, fighting desperately with an army of towering ogres.As You look up at the sky in great frantic you see fire breathing dragons in the sky causing a havoc.\nIn the midst of this turmoil, you feel a sharp, sudden impact—a cruel arrow pierces through your back.Piercing deeper, straight into your heart.\nThe world blurs around you, You grasped the truth too late—your brave endeavor had ended in an abrupt and untimely conclusion.\nIn that final fleeting moment, amidst the chaos and strife, you slipped away, a silent witness to the tragedy unfolding around you.(In other words, you died lol)";

			char retry;
			cout << "\nWould you like to retry? (Y/N): ";
			cin >> retry;


			if (retry == 'Y' || retry == 'y') {
				warriorScene1(); // Restart the scene if user chooses to retry
			}
			else {
				// User chose not to retry, can exit the function or perform other actions
				cout << "do you want to exit game?\n press 1 if yes \n";
				cin >> choice_exit;
				if (choice_exit == 1) {
					exit_game();
				}
				else {
					cout << "continuing game...";
				}
			}
			cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

		}
		else if (choice == 2) {
			cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			cout << "You swiftly grab your vital gear—armor clasped tight and sword firmly in hand—and rush out to aid those in need. ";
		}
		else {
			cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			cout << "\nInvalid Input: Enter 1 or 2";
		}
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	}
	cout << endl;
}

void warrior_quest1() {
	cout << "QUEST 1: Sanctum Of Eternity";
	cin.ignore();
	cout << "difficulty level = intermediate";
	cin.ignore();
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();

	character.xp = 0;
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	string answer;
	cout << "Head towards the Sanctum of Eternity." << endl;
	cin.ignore();
	cout << "As you embark on the path leading to the Sanctum of Eternity, the whispering winds guide you through the ancient woods." << endl;
	cin.ignore();
	cout << "Your loyal companion, a magnificent horse named Ember, accompanies you on this journey to the Sanctum of Eternity." << endl;
	cin.ignore();
	cout << "Amidst the towering trees of the woods, a Celestial presence—an imposing figure appears before you. It is the Forest Guardian, a manifestation of nature's elemental essence." << endl;
	cin.ignore();
	cout << "[Forest Guardian]: \"Behold wanderer of Eldoria, what fate guides you to these woods?\"" << endl;
	cin.ignore();
	cout << "[You]: \"I am on a journey to meet with the Spirit Astraea\"" << endl;
	cin.ignore();
	cout << "[Forest Guardian]: \"Bearer of purpose, Your path's outcome rests upon three riddles. Pass, and Astraea's wisdom awaits within the Sanctum of Eternity. Fail, and this path shall deny you passage. Shall you accept this challenge or retreat from the mysteries that guard the spirit's sanctuary?\"" << endl;
	while (answer != "y" && answer != "Y") {
		cout << "<type y or n>" << endl;
		getline(cin, answer);
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

		if (answer == "n" || answer == "N") {
			cout << "[Forest Guardian]: \"I am afraid I cannot let you pass through. Shall you accept this challenge or retreat from the mysteries that guard the spirit's sanctuary?\"" << endl;
			// Loop until y is entered
		}
		else if (answer == "y" || answer == "Y") {
			cout << "[You]: \"I accept.\"" << endl;
		}
	}
	cin.ignore();
	cout << "[Forest Guardian]: \"We shall begin then O brave warrior.\".\n";
	do {
		// First riddle
		cout << "[Forest Guardian]: \"Your first riddle: I am light as a feather, yet the strongest cannot hold me for much longer than a minute. What am I?\"\n hint=whispers in air\n" << endl;
		cout << "a. Breath" << endl;
		cout << "b. Gold" << endl;
		cout << "Enter options a or b \n";
		cin >> answer;


		if (answer == "A" || answer == "a") {
			cout << "[Forest Guardian]: \"Correct! One step closer to unlocking the sanctum's secrets. Shall you continue this pursuit?\"" << endl;
			cout << "As you answered correctly! you have gained xp and your level has been upgraded!";
			character.xp += 5;
		}

		else if (answer == "b" || answer == "B") {
			cout << "[Forest Guardian]: \"Your answer does not align with the truth sought. Make another attempt.\"" << endl;
			// Loop until correct answer is entered
		}
		else {
			cout << "Invalid input: Enter A or B";
		}
	} while (answer != "a" && answer != "A");
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cin.ignore();
	do {
		// Second riddle
		cout << "[Forest Guardian]: \"Your second riddle: The more you take, the more you leave behind. What am I?\"\nhint: Think about movement" << endl;
		cout << "a. Footsteps" << endl;
		cout << "b. Distance" << endl;
		cout << "enter options a or b \n";
		cin >> answer;

		if (answer == "a" || answer == "A") {
			cout << "[Forest Guardian]: \"Correct! One step closer to unlocking the sanctum's secrets. Shall you continue this pursuit?\"" << endl;
			cout << "As you answered correctly! you have gained xp and your level has been upgraded!";
			character.xp += 5;
		}
		else if (answer == "b" || answer == "B") {
			cout << "[Forest Guardian]: \"Your answer does not align with the truth sought. Make another attempt.\"" << endl;
			// Loop until correct answer is entered
		}
		else {
			cout << "Invalid Input: Enter A or B";
		}
	} while (answer != "a" && answer != "A");
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cin.ignore();
	do {
		// Third riddle
		cout << "[Forest Guardian]: \"Your third riddle: I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?\"" << endl;
		cout << "a. Wind" << endl;
		cout << "b. Echo" << endl;
		cin >> answer;

		if (answer == "b" || answer == "B") {
			cout << "[Forest Guardian]: \"Correct! Passage to the sanctum is yours, seeker of wisdom. Proceed forth to meet Astraea\"" << endl;
			character.xp += 5;
		}
		else if (answer == "a" || answer == "A") {
			cout << "[Forest Guardian]: \"Your answer does not align with the truth sought. Make another attempt.\"" << endl;

		}
		else {
			cout << "Invalid Input: Enter A or B";
		}
	} while (answer != "b" && answer != "B");
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cin.ignore();
	// Continue the story
	cout << "You continue to walk down your path. Upon reaching the sanctum of Eternity, a serene luminescence enveloped the space, and there, amidst swirling energies, appeared Astraea, the spirit of cosmic wisdom." << endl;
	cin.ignore();
	cout << "[Astraea]: \"Greetings O' seeker of wisdom, you have finally arrived\"" << endl;
	cin.ignore();
	cout << "[You]: \"What..? You knew I was coming?\"" << endl;
	cin.ignore();
	cout << "[Astraea]: \"Of course, I am the spirit of cosmic wisdom. I shall answer what you wish to know. The one responsible for the turmoil in Eldoria is the Witch." << endl;
	cin.ignore();
	cout << "She seeks to claim the kingdom for herself thus unleashing the army in a ruthless surprise to vanquish your father. Do you wish to seek more?\"" << endl;
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	// Choices
	string input = "";
	do {
		cout << "\nEnter W to ask about the witch" << endl;
		getline(cin, input);

		if (input == "w" || input == "W") {
			cout << "[Astraea]: \"She resides beyond the valley of shadows on the outskirts of Eldoria. Her powers... She is a master in Shadow manipulation and a Sorceress." << endl;
			cin.ignore();
			cout << "You must defeat her to make Eldoria peaceful again.\"" << endl;
			cin.ignore();
			cout << "[You]: \"I will avenge my father and my tribe\"" << endl;
			cin.ignore();
			cout << "(you received a health potion)" << endl;
			int user_input = 0;
			do {
				cout << "\npress 1 to add inventory\n";
				cin >> user_input;
				if (user_input == 1) {
					warrior_inventory + "\t health potion";
					cout << "\nhealth potion is added to inventory\n";
				}
				else {
					cout << "\ninvalid command";
				}
			} while (user_input != 1);

			cout << "(quest 1 complete)(level upgraded)" << endl;
			character.level++;
		}
		else {
			cout << "[Astraea]: \"I'm sorry, I don't understand.\"\n" << endl;
		}
	} while (input != "w" && input != "W");
	character.level++;
	cout << "your level increased\n";
	cout << "do you want to exit game?\n press 1 if yes \n";
	cin >> choice_exit;
	if (choice_exit == 1) {
		exit_game();
	}
	else {
		cout << "continuing game";
	}

	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}
void warrior_quest2() {
	int user_input;
	cout << "Quest 2: Gathering Alliances\n";
	cin.ignore();
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << " As you and your horse Ember gallop towards the capital, the towering spires of the king\'s palace loom on the horizon, a beacon of hope amidst the kingdom\'s turmoil.\nUpon arrival, you are ushered into the opulent halls of the palace by the palace\'s guards, \n your determination is unwavering as you seek formidable alliances.You Approach the throne room and stand before the king.\n[king]: My son, the king\'s voice echoed with empathy and resolve as he addressed Orion.\n[king] : Ive been apprised of the trials that have befallen you. Your loss pains me deeply, but our sorrow must fuel our resolve to avenge and protect.I stand by your side and shall rally an army to support your quest.\nyou feel a sense of relief.The king\'s empathy lifts a burden off your chest. His encouragement gave you a rush of adrenaline\n	[king] : However, urgent news has reached us. The peaceful enclave of the elf village, our cherished allies, faces a perilous assault. \nI implore you, my son, to hasten to their aid.Prevent their sanctuary from being tarnished by the vile hands of our enemies.\nI shall dispatch reinforcements immediately to stand with you. \n(You recieved a bow and arrow from the king)";
	cin.ignore();
	cout << "\nYou recieved bow and arrows you have gained xp and your level has been upgraded!\n";
	cin.ignore();
	character.xp += 25;
	character.level++;
	cout << "\nyour level is:" << character.level;
	cout << endl;
	cout << "\nyour xp is:" << character.xp;
	
	cin >> user_input;
	do {
		cout << "\npress 1 to add inventory";
		cin >> user_input;
		if (user_input == 1) {
			warrior_inventory + "\tbow and arrow";
			cout << "\nbow and arrow are added to inventory\n";
		}
		else {
			cout << "\ninvalid command";
		}
	} while (user_input != 1);
	cout << "\n QUEST 2 IS COMPLETED\n";
	cout << "do you want to exit game?\n press 1 if yes \n";
	cin >> choice_exit;
	if (choice_exit == 1) {
		exit_game();
	}
	else {
		cout << "continuing game";
	}
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}
void warrior_quest3() {
	cout << "\nQUEST 3: Journey through the mystical forest";
	cin.ignore();
	cout << "difficulty level = medium";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	int choice;
	cin.ignore();
	cout << " \nOnce again..you set out for a journey\n As you venture through the dense woods en route to Shadow Valley, you stumble upon a village amidst the ancient trees. This village is home to a community of elves.\nThere you see a cyclops wreaking havoc.\n** The cyclops notices you and it reacts by bellowing a thunderous roar.Raising its massive club high in the air it charges towards you with formidable strength and speed. The cyclops swings its club, aiming to crush you with brute force.**\n Quick! Counter his attack!\n";
	while (character.health > 0 && enemy_health.enemyHealth > 0) {
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------ \n";
		int choice;
		cout << "Choices:\n1. Evade the cyclops' attack \n 2. Use your new bow and arrow \n ";
		cin >> choice;
		do {
			if (choice == 1)
			{
				rng();

				if (rand_number >= 1 && rand_number <= 60)
				{
					cout << "(successfully evaded!) ....You swiftly dodge the initial strike of the cyclops, but in a swift and brutal motion, it swings its spiky club once more.. ";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					//enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 61 && rand_number <= 90)
				{
					cout << "(unsuccessful evasion) Oh no! That didnt work! Try again!";
					character.health -= 10;
					cout << "Your remaining health: " << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}


				else
					cout << "Invalid number:";
			}

			else if (choice == 2) {
				rng();


				if (rand_number >= 1 && rand_number <= 60)
				{
					cout << "(successful hit) You draw your bow, taking aim as the Cyclops charges towards you. You aim your arrow and release- the arrow pierces the tendon of its ankle. \nThe Cyclops stumbles and crashes to the ground, its roar of pain echoing through the forest.\n";
					cout << endl;
					character.xp += 5;
					cout << "\nyou have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 60 && rand_number <= 90)
				{
					cout << "(unsuccessful hit) Oh no! That didnt work! Try again!";
					character.health -= 10;
					cout << "Your remaining health: " << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 90 && rand_number <= 100) {
					cout << "(critical hit) Great job! You caused double damage! ";
					enemy_health.enemyHealth -= 40;
					cout << endl;
					character.xp += 10;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					// enemy's turn
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else
					cout << "Invalid number:";
			}
			else {
				cout << "Invalid number:";
				cout << "choices:\n1. Evade the cyclops' attack \n 2. Use your new bow and arrow \n ";
				cin >> choice;

			}
		} while (choice != 1 && choice != 2);
	}//while loop ended for victory or defeat
	if (enemy_health.enemyHealth <= 0) {
		cout << "\nYou have defeated your enemy, Great Job!";
		if (character.xp >= 25) {
			character.level++;
			cout << "Level Upgraded!\n Your new level is" << character.level;
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << "continuing game";
			}
		}
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	}
	else if (character.health <= 0) {
		cout << "\nOh no...You died :(";
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			warrior_quest3();
		}
	}

	// next scene scene
	cin.ignore();
	cout << "\nYou then see a dwarf elf emerging from a bush.\n[elf]: \"You have saved us. You saved my village from the dangerous being. Please, come with me. I must take you to the elder\".";

	do {
		cout << "\nchoice :\n1. Ask about the elder\n2. proceed to go with the elf  ";
		cin >> choice;
		if (choice == 1) {


			cout << "[elf]: The elder is the head of our village.Please, come with me.I must take you to the elder.";
		}
		else if (choice == 2) {


			cout << "[elf]: Follow me.";
		}
		else {
			cout << "<Invalid Input: type 1 or 2>";
		}
	} while (choice != 1 && choice != 2);
	cout << "The elf guides you through a trail in the village. There are many elves around you..they stare at you curiously. Finally, a small cottage is in view.[elf]: /'Please come inside, the elder is waiting/' the elf says while opening the door.\nyou step inside and take a look around.\n";
	string user_input = "";      //for user input to look
	do {
		cout << "<Type L to look>";
		cin >> user_input;
		if (user_input == "l" || user_input == "L") {
			cout << "You see a fireplace to your left. A bookshelf with books and artifacts and a cozy chair near it. On the left, there is a bed. You see an elderly elf laying on the bed as you walk in \n";

		}
		else {
			cout << "Invalid Input: ";
		}

	} while (user_input != "l" && user_input != "L");

	cout << "[elf]: \"Elder!Elder!you won't believe it. The cyclops is finally gone! Our village is saved\"\n[elder] : \"Now who defeated that mighty beast.. ? \" \n[elf] : \"I have brought him, look, this young man has saved us \" \nThe elder looks at you in disbelief \n[elder] : \"my oh my..this is wonderful news\"";
	do {
		cout << "choice:\n 1. ask about the cyclops\n 2. ask about the village\n";
		cin >> choice;
		if (choice == 1)
		{
			cout << ": [elder]: That darn witch..she is after something I own.She sent that cyclops to terrorize us.But we are now safe thanks to you.I am entrusting our treasure to you.I hope it will benefit you on your journey.\n";

		}
		else if (choice == 2) {

			cout << "\n[elder]: \'This village is elf territory.Our village is close to the valley of shadows, where the witch is known to reside.The cyclops was sent to terrorize us and steal our treasure.I am entrusting our treasure to you.I hope it will benefit you on your journey.>\n";
			//inventory add magical stone
		}
		else {
			cout << "Invalid Input";
		}
	} while (choice != 1 && choice != 2);
	cout << "\nYou have recieved a magical shiny stone!";
	
	int user_input1 = 0;
	
	do {
		cout << "\npress 1 to add inventory";
		cin >> user_input1;
		if (user_input1 == 1) {
			warrior_inventory + "\t health potion";
			cout << "\nhealth potion is added to inventory\n";
		}
		else {
			cout << "\ninvalid command";
		}
	} while (user_input1 != 1);
	cout << "\nXP increased!";
	character.xp += 25;
	character.level++;
	cout << "Level Upgraged! Your new level is: " << character.level;
	cout << "do you want to exit game?\n press 1 if yes \n";
	cin >> choice_exit;
	if (choice_exit == 1) {
		exit_game();
	}
	else {
		cout << "continuing game....";
	}
}
// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<quest 4>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void warrior_quest4() {
	cout << "\nQUEST 4: Valley of Shadows, Witch's Lair\n";
	cin.ignore();
	cout << "difficulty level = Hard";
	cin.ignore();
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();
	cin.ignore();
	int choice;
	cout << "You enter the valley of shadows with your horse(ember) and the army of knights, demihumans and mages. The very air in Shadow Valley seems to thicken with malevolent intent. \nA chill crawls down your spine, a silent warning of the witch's ominous presence that hangs heavily in the atmosphere.\nYet, your determination propels you forward. You are met with an unexpected sight—a formidable array of the Witch's malevolent forces.\nThe Witch, stood poised behind her menacing army of ogres and dragons.\n[Witch]: HAHAHAHA! Feeble mortal, do you truly believe you can challenge my power? Your arrogance is but a fleeting spark in the face of my eternal darkness!\n[you]: You foul witch. Your reign of terror ends today. You've brought untold suffering upon innocents, but I will not stand idly by. \nI am here to bring justice to Eldoria and to put an end to your malevolence!";
	cin.ignore();
	// fight start
	cout << "\nAs the chaos of battle unfolds, you spot an ogre overpowering one of your soldiers. Reacting swiftly, you charge toward the looming threat, determination etched in every stride.\n With your heart pounding, what action will you take to fend off the menacing ogre?";
	while (character.health > 0 && enemy_health.enemyHealth > 0) {
		cout << "\nchoices:\n1. Strike with your sword\n2. Shoot him with your arrow\n";
		cin >> choice;

		if (choice == 1) {
			rng();


			if (rand_number >= 1 && rand_number <= 50)
			{
				cin.ignore();
				cout << "\n(successful hit)Focusing on precision, you lunge forward, aiming your blade for a well-aimed thrust at the ogre's vulnerable points, seeking to disable it swiftly.";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cin.ignore();
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else if (rand_number > 50 && rand_number <= 90)
			{
				cout << "(unsuccessful hit) Oh no! That didnt work! Try again!";
				character.health -= 10;
				cout << "Your remaining health: " << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cin.ignore();
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else {
				cout << "Invalid number:";
			}
		}

		else if (choice == 2) {
			rng();
			if (rand_number >= 1 && rand_number <= 50)
			{
				cout << "(successful hit) You draw your bow, taking aim at the ogre. You aim your arrow and release- the arrow pierces the tendon of its ankle. The ogre stumbles and crashes to the ground, its roar of pain echoing through the battlefield. ";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "\nEnemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 50 && rand_number <= 90)
			{
				cout << "(unsuccessful hit) You missed, try again!\nYour remaining health: ";
				character.health -= 10;
				cout << "Your remaining health: " << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);

			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
			}
			else {
				cout << "Invalid number:";
			}
		}

		else {
			cout << "Invalid number: Try 1, 2 or 3";
			warrior_quest4();
		}
		if (enemy_health.enemyHealth <= 0) {
			cout << "\nYou have defeated your enemy, Great Job!";
			if (character.xp >= 35) {
				character.level++;
				cout << "Level Upgraded!\n Your new level is" << character.level;
			}
			cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

		}
		else if (character.health <= 0) {
			cout << "\nOh no...You died :(";

		}
		cout << "\n As the clamor of battle surrounds you, a colossal shadow emerges from the northern skies. The sky erupts in a blaze as a mighty dragon unleashes torrents of searing flames,\nthreatening to engulf and decimate your comrades below.";
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";


		// quest part 1 end here
		character.health = 100;
		enemy_health.enemyHealth = 100;
		while (character.health > 0 && enemy_health.enemyHealth > 0)
		{
			cout << "\nWhat do you do:\n1. Shoot dragon with arrow\n2. use the magic stone\n";
			cin >> choice;
			if (choice == 1) {
				rng();
				cout << ": With unwavering precision, your arrow finds its mark, piercing the dragon's jaw and sending it crashing to the ground, its roar of pain echoing through the battlefield. \n";
				if (rand_number >= 1 && rand_number <= 50)
				{
					cin.ignore();
					cout << "\n(successful hit)With unwavering precision, your arrow finds its mark, piercing the dragon's jaw and sending it crashing to the ground, its roar of pain echoing through the battlefield.";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);

					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "(unsuccessful hit) Oh no! That didnt work! Try again!";
					character.health -= 10;
					cout << "Your remaining health: " << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 90 && rand_number <= 100) {
					cout << "(critical hit) Great job! You caused double damage! ";
					enemy_health.enemyHealth -= 40;
					cout << endl;
					character.xp += 10;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					// enemy's turn
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					enemy_attack(1, 40, 41, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				}
				else {
					cout << "Invalid number:";
				}
			}
			else if (choice == 2) {
				rng();
				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "(successful hit) You Direct the stone's energy towards the dragon, a luminous blue shield emerges, enveloping the battlefield and safeguarding your allies from the dragon's fiery wrath.As the dragon's fire meets the magical shield, the blazing fire rebounds, striking the dragon itself with a searing impact. ";
					enemy_health.enemyHealth -= 20;
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					cout << "\nEnemy health: " << enemy_health.enemyHealth;
					cin.ignore();

					// enemy's turn
					enemy_attack(1, 40, 41, 100);
				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "(unsuccessful hit) You missed, try again!\nYour remaining health: ";
					character.health -= 10;
					cout << "Your remaining health: " << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);

				}
				else if (rand_number > 90 && rand_number <= 100) {
					cout << "(critical hit) Great job! You caused double damage! ";
					enemy_health.enemyHealth -= 40;
					cout << endl;
					character.xp += 10;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					cout << "Enemy health: " << enemy_health.enemyHealth;
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
				}
				else
					cout << "Invalid number:";
			}
			else {
				cout << "Invalid number:";
				warrior_quest4();
			}
		}
		cout << "do you want to exit?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
		// quest 4 part 3 ends here
		cout << "[Demihuman]: We'll handle the witch's army. You must confront her within!\n[mage]:I will assist you with your battle with the witch\nYou leave your allies behind to fight with the enemy and head inside the witch's chamber with your fellow mage. As you enter the chamber, a surge of fury courses through your veins at the sight of the Oni, the very creature that took your father's life, standing guard beside the witch.\n[You]: You, the vile creature who took my father from me. I will make you pay for your treachery.\n[Oni]: You dare challenge us, mortal? You shall meet your end here!\n[witch]: Little warrior, your bravery is commendable, but in my realm, your valor holds no power. Behold as I unleash the depths of my true, unrivaled might!\n[witch]: Little warrior, I applaud you for getting to this point. But you cannot defeat me. I will show you my true powers.";
		cin.ignore();
		cout << "The witch raises her hands, conjuring shadows that coil and twist, morphing into haunting illusions and whispers of despair,casting the chamber into an impenetrable darkness that stifles all senses, a testament to her mastery of shadow manipulation and sorcery. \n[You]: I've faced your darkness, and I'll shatter it. Your powers won't stop me from ending your reign of terror.";
		cin.ignore();
		cout << "The witch got furious and ordered oni to kill him. Oni with his massive spiked club rushes towards to attack you.";
		character.health = 100;
		enemy_health.enemyHealth = 100;
		while (character.health > 0 && enemy_health.enemyHealth > 0)
		{
			cout << "\nChoices:\n1. Shoot with your arrow \n2. Evade his attack\n3. Strike with your sword\n";
			cin >> choice;
			if (choice == 1) {
				rng();

				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "(sucessful hit)You draw your bow, taking aim at the Oni. You aim your arrow and release- the arrow pierces the tendon of its ankle. The Oni stumbles and crashes to the ground. ";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "The hit wasn't successful and you got hit by the Oni's attack, your health has declined";
					character.health -= 10;
					cout << "Your remaining health: " << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 90 && rand_number <= 100)
				{
					cout << "(critical hit) Great job! You caused double damage! ";
					enemy_health.enemyHealth -= 40;
					cout << endl;
					character.xp += 10;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					// enemy's turn
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					enemy_attack(1, 40, 41, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else {
					cout << "Invalid number:";
				}
			}
			else if (choice == 2)
			{
				rng();

				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "You evaded the Oni's attack sucessfully, what do you do next?";
					cin >> choice;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					cout << "\nEnemy health: " << enemy_health.enemyHealth;

					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << " You swiftly dodge the initial strike of the Oni, but in a swift and brutal motion, it swings its spiky club once more.The vicious strike connects, hitting you, and darkness engulfs your vision as the world fades away. (You died :'< ) ";
					character.health -= 10;
					cout << "Your remaining health: " << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);

				}
				else if (rand_number > 90 && rand_number <= 100) {
					cout << "(critical hit) Great job! You caused double damage! ";
					enemy_health.enemyHealth -= 40;
					cout << endl;
					character.xp += 10;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					cout << "Enemy health: " << enemy_health.enemyHealth;
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
				}
				else {
					cout << "Invalid number:";
				}
			}
			else if (choice == 3)
			{
				rng();

				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "(successful hit) Raising your shield, you deflect the ogre's incoming assault, using the opening to retaliate with a forceful bash, attempting to disrupt its balance. ";
					enemy_health.enemyHealth -= 20;
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					cout << "Enemy health: " << enemy_health.enemyHealth;
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "(unsuccessful hit) You missed, try again\n your remaining health is: ";
					character.health -= 10;
					cout << "Your remaing health: " << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
				}
				else if (rand_number > 90 && rand_number <= 100) {
					cout << "(critical hit) Great job! You caused double damage!\n ";
					enemy_health.enemyHealth -= 40;
					character.xp += 10;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					cin.ignore();
					// enemy's turn
					enemy_attack(1, 40, 41, 100);
				}
				else {
					cout << "Invalid number:";
				}
			}
			else {
				cout << "Invalid Input";
				warrior_quest4();
			}
		}
		if (character.health <= 0)
		{
			cout << "[witch]: Feeble mortal, your persistence is futile against my might.\n*";
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				warrior_quest4();
			}

		}
		if (enemy_health.enemyHealth <= 0) {
			cout << "[witch]Impressive, but victory over my servant means nothing. You'll soon realize the depth of my power.";
			if (character.xp >= 40) {
				character.level++;
				cout << "Level Upgraded!\n Your new level is" << character.level;
				cout << "do you want to exit game?\n press 1 if yes \n";
				cin >> choice_exit;
				if (choice_exit == 1) {
					exit_game();
				}
				else {
					cout << "continuing game....";
				}
			}
		}
		cout << "This is the final battle. Defeat the witch and victory shall be yours.\nAs the battle intensifies, the Witch unleashes her most potent shadow manipulation. The chamber is engulfed in darkness where the witch hides behind the shadows.";

		cout << "\n[witch]: How will you defeat me if you cannot see me, mortal.\n";
		character.health = 100;
		enemy_health.enemyHealth = 100;
		while (character.health > 0 && enemy_health.enemyHealth > 0) {
			cout << "choices:\n1. Use magical stone\n2. Use your sword\n";
			cin >> choice;
			if (choice == 1) {
				cout << "You take out the magical stone and direct it towards the shadow. The stone illuminates the chamber overpowering the shadows.";
				// 			\nchoices: \n1. Strike with you sword:.\n2. Shoot with your arrow: \n    3. Evade attack";
				// 			cin >> choice;
				if (choice == 1)
				{
					cout << "Strike with you sword: Focusing on precision, you lunge forward, aiming your blade for a well-aimed thrust at the Witch's vulnerable points, seeking to disable it swiftly.";
				}
				else if (choice == 2)
				{
					cout << "You draw your bow, taking aim at the Witch. You aim your arrow and release. \n ";
				}
				else if (choice == 3)
				{
					cout << "Evade attack'<";
				}
				else {
					cout << "invalid:";
				}
			}
			else if (choice == 2)
			{
				cout << "The mage illuminates your sword with his magic. Use your sword to attack where you think the witch is.";
				do {
					cout << "\nchoices:\n1. Strike ahead\n2. strike behind\n3. strike left\n4. strike right\n";
					cin >> choice;
					if (choice == 1) {
						rng();

						if (rand_number >= 50 && rand_number <= 100)
						{
							cout << "(sucessful hit)";
							character.xp += 15;
							cout << "You have gained xp \nYour xp is:" << character.xp;
							enemy_health.enemyHealth -= 20;
							cout << endl;
							cout << "Enemy health: " << enemy_health.enemyHealth;
							cout << endl;
							cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
						}
						else if (rand_number > 1 && rand_number <= 50)
						{
							cout << "The hit wasn't successful";
							character.health -= 10;
							cout << "Your remaining Health: " << character.health;
							cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

						}
						else
							cout << "Invalid number:";
					}
					else if (choice == 2)
					{
						rng();

						if (rand_number >= 50 && rand_number <= 100)
						{
							cout << "Sucessful hit!";

							enemy_health.enemyHealth -= 20;
							cout << endl;
							character.xp += 10;
							cout << "you have gained xp \nYour xp is:" << character.xp;
							cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

							cout << "\nEnemy health: " << enemy_health.enemyHealth;
						}
						else if (rand_number > 1 && rand_number <= 50)
						{
							cout << "unsucessful hit :(";
							character.health -= 10;
							cout << "Your remaining health is: " << character.health;
							cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

						}
						else {
							cout << "Invalid number:";
						}
					}
					else if (choice == 3)
					{
						rng();

						if (rand_number >= 50 && rand_number <= 100)
						{
							cout << "(successful hit) ";
							enemy_health.enemyHealth -= 20;
							cout << endl;
							character.xp += 15;
							cout << "you have gained xp \nYour xp is:" << character.xp;
							cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

							cout << "Enemy health: " << enemy_health.enemyHealth;
						}
						else if (rand_number > 1 && rand_number <= 50)
						{
							cout << "(unsuccessful hit) You missed, try again\n your remaining health is: ";
							character.health -= 10;
							cout << "Your remaining Health: " << character.health;
							cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

						}
						else
							cout << "Invalid number:";
					}
					else if (choice == 4) {
						rng();

						if (rand_number >= 50 && rand_number <= 100)
						{
							cout << "(successful hit) ";
							cout << endl;
							character.xp += 10;
							cout << "you have gained xp \nYour xp is:" << character.xp;
							enemy_health.enemyHealth -= 20;
							cout << endl;
							cout << "Enemy health: " << enemy_health.enemyHealth;
							cout << endl;
							cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
						}
						else if (rand_number > 1 && rand_number <= 50)
						{
							cout << "Unsuccessful hit :(";
							character.health -= 10;
							cout << character.health;
							cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
						}
						else
							cout << "Invalid number:";
					}
					else {
						cout << "Invalid Input: Try 1, 2 ,3 or 4";
						warrior_quest4();
					}
				} while (choice != 1 && choice != 2 && choice != 3 && choice != 4);
			}
			cout << "invalid choice:";
		}

	}	if (enemy_health.enemyHealth <= 0)
	{
		cout << "\nYou have defeated the witch! Eldoria have been saved! :D";
		if (character.xp >= 25) {
			character.level++;
			cout << "Level Upgraded!\n Your new level is =" << character.level;
			cout << "\n enter 1 to exit:";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				warrior_quest4();
			}
		}

	}
	else if (character.health <= 0) {
		cout << "\nOh no...You died :(";
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			warrior_quest4();
		}
	}
}


void mage_quest1() {
	cout << "Quest 1: THE WILLOW TREE\n";
	cout << "difficulty level = intermediate";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();
	string user_input;
	string answer;
	cout << "\nQuest 1:(Journey to the Willow Tree)\n";
	cout << "\nDeep into the mystical Enchanted Forest, ";
	cout << character.name;
	cin.ignore();
	cout << ", guided by ancient runes and the whispers of the wind, seeks the revered willow tree—the guardian of Eldoria's secrets. The forest is dense with enchanted foliage, and as Thalia presses forward, shadows dance with every step.\n";
	cout << "\nAs " << character.name << " steps into the Enchanted Forest, her trusted companion, an extraordinary owl named Hedwig, emerges from the folds of her cloak.Hedwig, her loyal pet and confidant, possesses the ability to navigate the mystical realms and serves as a guide through the labyrinthine paths\n";
	cin.ignore();
	cout << "Amidst the towering trees of the woods, a Celestial presence—an imposing figure appears before you. It is the Guardian of the Willow Tree, a manifestation of nature's elemental essence.\n";

	do {
		cout << "[Guardian]: \"Behold wanderer of Eldoria, what fate guides you to these woods?\n< type  W for Willow tree\n >\n";
		cin >> user_input;
	} while (user_input != "w" && user_input != "W");

	cout << " [You]:  I am on a journey to save the Kingdom.I must meet with the Willow tree.\n";
	cout << "\n[ Guardian]: \"Bearer of purpose, your path\'s outcome rests upon three riddles. Pass, and wisdom of the willow tree awaits you. Fail, and this path shall deny you passage. Shall you accept this challenge?\"\n";

	do {
		cout << "<type Y for YES or  N for NO>\n";
		cin >> user_input;
		if (user_input == "Y" || user_input != "y") {

			cout << "\n[you]: \" press y for yes to continue the game\"\n";
		}
		else if (user_input == "n" || user_input != "N") {
			cout << "[ Guardian]: \"I am afraid I cannot let you pass through.Shall you accept this challenge ? \"\n";

		}
		else {

			cout << "Invalid input, Try Again!\n";
		}


	} while (user_input != "y" && user_input != "Y");
	cout << "\n[ Guardian]: \"We shall begin then O\' noble savior.";

	//riddles 
	do {
		//  First riddle
		cout << "\nYour first riddle:\n[ Guardian]: \" Through me, realms unseen are unveiled, a doorway to lands where magic prevailed. What am I??\"\n";
		cout << "(hint: Step through my shimmering surface to traverse between magical dimensions.)\n ";
		cout << "a.Portal" << endl;
		cout << "b.mirror " << endl;
		cin >> answer;

		if (answer == "a" || answer == "A") {
			cout << ": [ Guardian]: \"Correct!One step closer to meeting the mystical tree.Shall you continue this pursuit ? \"\n";
			cout << "[You]: Yes I will continue!\n";
			character.xp += 5;
		}
		else if (answer == "b" || answer == "B") {
			cout << "[ Guardian]: \"Your answer does not align with the truth sought.Make another attempt or step away from this path.\"\n" << endl;
		}
		else {
			cout << "Invalid Input: Enter a or b\n";
		}
	} while (answer != "a" && answer != "A");

	do {
		//  second riddle
		cout << "\nYour Second riddle: \n[Guardian]: \"I stand tall without legs and grow old without aging.My rings tell tales of centuries past.What am I??\"\n";
		cout << "(hint: I am deep in earth also above the earth)\n ";
		cout << "a.tree\n" << endl;
		cout << "b.moon\n " << endl;
		cin >> answer;

		if (answer == "a" || answer == "A") {
			cout << ":[Guardian]: \"Correct!One step closer to meeting the mystical tree.Shall you continue this pursuit ? \"\n";
			cout << "You: Yes I will continue!";
			character.xp += 5;
		}
		else if (answer == "b" || answer == "B") {
			cout << "[ Guardian]: \"Your answer does not align with the truth sought.Make another attempt or step away from this path.\"\n" << endl;

		}
		else {
			cout << "Invalid Input: Enter a or b\n";
		}
	} while (answer != "a" && answer != "A");

	do {
		//  third riddle
		cout << "\nYour third riddle: \n[Guardian]: \" In the night sky, I dance with the stars, casting silvery shadows upon the Earth.I wax and wane, yet I am always whole.What am I ??  \"\n";
		cout << " (hint: It appears in the night sky, mirroring the celestial bodies. Lakes and mirrors often showcase its beauty) ";
		cout << "\na. moon " << endl;
		cout << "b. reflection " << endl;
		cin >> answer;

		if (answer == "a" || answer == "A") {
			cout << ": [ Guardian]: \"Correct!The path to the Willow Tree is yours.\" \"\n";
			character.xp += 5;
		}
		else if (answer == "b" || answer == "B") {
			cout << "[ Guardian]: \"Your answer does not align with the truth sought.Make another attempt or step away from this path.\"\n" << endl;

		}
		else {
			cout << "Invalid Input: Enter a or b\n";
		}
	} while (answer != "A" && answer != "a");

	cout << "<<You continue to walk down your path. Upon reaching the destination, you see a magnificent willow tree standing before you, bathed in an ethereal glow reminiscent of blue crystal radiance, casting a spell of awe upon the surroundings.\nThe willow tree speaks to you in enchantment.\n";
	cin.ignore();
	cout << "\\*Willow:\\*" << character.name << " Stormshaper, heir to the Stormweaver legacy, you have proven yourself worthy. Speak your quest, and the wisdom of Eldoria shall flow through me.\n[You]:O venerable Willow, guardian of Eldoria\'s secrets, I seek your counsel. The prince and princess have vanished, and a veil of mystery shrouds their disappearance.	\n";
	cin.ignore();
	cout << "[Willow]: It is the witch who bears responsibility for the abduction of the royal prince and princess.\n[You]:The witch residing in the Valley of Shadows ?\n";
	cin.ignore();
	cout << "[Willow]: Indeed. She harbors intentions that threaten the peace of Eldoria. Your grandfather banished her from the realms of Eldoria due to her malevolent designs\n	[You]:Why has she kidnapped the prince and princess? What dark intentions stir within her, seeking to shroud our kingdom in shadows and despair?\n";
	cin.ignore();
	cout << "[Willow]: She is driven by a sinister determination—to transform the kidnapped citizens into zombies. Through dark magic, she augments her forces, plotting to unleash an undead onslaught upon the kingdom of Eldoria.\n[You]:Why zombies? Are they not her minions?	\n";
	cin.ignore();
	cout << "[Willow]:No, my dear. They are the very souls she abducted from Eldoria, twisted into unwilling servants of darkness through her malevolent spells. Your noble quest spans both their salvation and the restoration of their stolen lives.." << endl << "[You]:I don’t know the map of the castle and the route to go there." << endl;
	cin.ignore();
	cout << "[You]:Wise Willow, in the absence of a map, I find myself in need of a guiding light through the clandestine paths leading to the witch's castle. How can I navigate this perilous journey?\n";
	//next mission
	cout << "<<<<<Your next quest will let you go to the secret room of witchs castle where she is hiding the prince and princess>>>>>";
	cout << "[Willow:]Fear not, Thalia. In your quest to free the prince and princess, I gift you an ethereal companion—a radiant fairy, born from the essence of Eldoria's light. This whimsical being shall flutter by your side, lighting up the hidden paths and guiding you through the secret passages to the heart of the witch's castle. Embrace the fairy's glow, and may its enchanting presence be your guiding spark through the shadows..\n";
	cin.ignore();
	cout << "[Fairy:]: lets go to save the future of our kingdom.\n";
	character.level++;
	cout << "your level increased\n";
	cout << "\n your new level is" << character.level;
	cout << "do you want to exit game?\n press 1 if yes \n";
	cin >> choice_exit;
	if (choice_exit == 1) {
		exit_game();
	}
	else {
		cout << "continuing game....";
	}
}

void mage_quest2()
{
	cout << "Quest 2: FIGHT WITH CHIMERA\n";

	cout << "difficulty level=medium";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();
	int choice;
	cout << "Towering before you, shrouded in shadow and forest, the castle looms. The princess and prince wait within, and only you, guided by the whispers of the fairy, can save them. Two imposing guard towers flank the dark hallway, gateway to the castle's heart. Beyond lies the throne room, but hidden deeper still, shrouded in forbidden magic, is the witch's lair. We must reach the secret room, concealed somewhere within, and only the fairy's cunning knows the path. Challenges and battles await, but fear not. With the fairy by your side, your blade poised, and courage burning bright, you shall prevail. Are you ready, brave adventurer? ";
	cin.ignore();

	cout << "\nFairy:The back door is our best chance.Fewer guards, and the secret room is close.Ready ?\nYOU : Lead the way.Just tell me where to go.\nFairy : The tunnels entrance lies ahead, but beware the chimera that guards it. A lions might, a serpents tail, and a goats horns... \n It breathes fire, so tread lightly and strike when it turns.\nYou : Understood.Speed and stealth, right ? \nFairy : Precisely.We'll slip past like shadows in the night. Now, let's move.\nYou crouch behind the towering tree, eyes fixed on the looming tunnel entrance, awaiting the chimera's approach.\nFairy:(whispering)Now, run! Its  time to face the chimera\n Scene : You dash towards the chimera, magical energies swirling around you, prepared to unleash your powers.The chimera spots you and charges, launching a fiery attack and roaring\nQuick, counter its attack!\n";
	while (character.health > 0 && enemy_health.enemyHealth > 0) {
		do {
			cout << "Choices:\n1.Evasion by levitating power(press 1)\n2.Counter attack using your fire magic(press 2)\n";
			cin >> choice;
			if (choice == 1)
			{
				rng();
				if (rand_number >= 1 && rand_number <= 60)
				{
					cout << "(successful) You evaded sucessfully! ";
					cout << endl;
					character.xp += 15;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn
					cin.ignore();
					enemy_attack(1, 40, 41, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 60 && rand_number <= 100)
				{
					cout << "(unsuccessful hit) Oh no! That didnt work! Try again!";
					character.health -= 10;
					cout << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					// enemy's turn
					cin.ignore();
					enemy_attack(1, 40, 41, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else {
					cout << "Invalid number:";
				}
			}
			else if (choice == 2)
			{
				rng();

				if (rand_number >= 1 && rand_number <= 60)
				{
					cout << "(successful hit) Focusing on precision, you lift your wand, aiming at the Chimera, a stream of fire comes through your wand and hits the Chimera.";
					enemy_health.enemyHealth -= 20;
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					cout << "\nEnemy health: " << enemy_health.enemyHealth;


					// enemy's turn
					cin.ignore();
					enemy_attack(1, 40, 41, 100);
				}
				else if (rand_number > 60 && rand_number <= 90)
				{
					cout << "(unsuccessful hit) You missed, try again!\nYour remaining health: ";
					character.health -= 10;
					cout << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					// enemy's turn
					cin.ignore();
					enemy_attack(1, 40, 41, 100);

				}
				else if (rand_number > 90 && rand_number <= 100) {
					cout << "(critical hit) Great job! You caused double damage! ";
					enemy_health.enemyHealth -= 40;
					cout << endl;
					character.xp += 10;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					cout << "Enemy health: " << enemy_health.enemyHealth;
					// enemy's turn
					cin.ignore();
					enemy_attack(1, 40, 41, 100);
				}
				else {
					cout << "Invalid number:";
				}
			}
			else
			{
				cout << "invalid choice:";
			}
		} while (choice != 1 && choice != 2 && choice != 3);
	}

	if (enemy_health.enemyHealth <= 0) {
		cout << "\nYou have defeated your enemy, Great Job!";
		if (character.xp >= 25) {
			character.level++;
			cout << "Level Upgraded!\n Your new level is" << character.level;
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << "continuing game....";
			}
		}
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	}
	else if (character.health <= 0) {
		cout << "\nOh no...You died :(";
		int retry;
		do {
			cout << "\n you failed your mission\t do youwant to retry? press 1";
			cin >> retry;
			if (retry == 1) {
				mage_quest4();
			}
			else {
				cout << "do you want to exit game?\n press 1 if yes \n";
				cin >> choice_exit;
				if (choice_exit == 1) {
					exit_game();
				}
				else {
					cout << "continuing game....";
				}
			}
		} while (retry != 1);

	}
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}
void mage_quest3()
{
	cout << "Quest 3: KEY TO THE SECRET DOOR\n";
	cout << "Difficulty level = medium\n";
	character.xp = 0;
	cout << endl;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	cout << endl;
	characterInfo();
	cout << endl;
	cout << "\nFairy: Well done on defeating the chimera. Now, we must head inside the tunnel. The door to the secret room lies within. You must defeat the guards inside to retrieve the key to the door.\n";
	cin.ignore();
	cout << "As you walk through the dark tunnel, whispers of ghosts fill the air. The echoes guide you to the tunnel's end, revealing two giant ogres fiercely guarding the door. Their roars pierce the silence as they prepare for battle.";
	cin.ignore();
	cout << "\nOgre 1: How did you find this path?\nOgre 2:She didn't find this path; death led her here.\nYou : Yes, you are right. Your death called me here.\n";
	cout << "The irritated ogres charge towards you simultaneously, brandishing their clubs with menacing force.";
	while (character.health > 0 && enemy_health.enemyHealth > 0) {
		cout << "Quick! Counter their attack:\nChoices:\n1.	Evade using levitation\n2.	Use curse magic\n3.	Use fire magic\n";
		int choice;
		cin >> choice;
		do {
			if (choice == 1)
			{
				rng();
				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "You focus your magical powers on levitation, lifting yourself above the ground. The ogres attack misses, and you successfully evade. ";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn

					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "(Unsuccessful) The club catch you, and you begin to lose your health.";
					character.health -= 10;
					cout << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					// enemy's turn

					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else
					cout << "Invalid number:";
			}

			else if (choice == 2)
			{
				rng();

				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "you curse them with your magic and they end up hitting each other(successful attack) ";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn

					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "The club hits  you injuring you and you loose health.(unsuccessful)";
					character.health -= 10;
					cout << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					// enemy's turn

					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else
					cout << "Invalid number:";
			}
			else if (choice == 3)
			{
				rng();

				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "You harness the power of fire, directing it towards the charging ogres. The flames engulf them, causing them to writhe in pain. ";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn

					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "(Unsuccessful) The club catch you, and you begin to lose your health.";
					character.health -= 10;
					cout << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				}
				else
					cout << "Invalid number:";
			}
			else {
				cout << "\n invalid command \n press 1,2,3";
				cin >> choice;
			}
		} while (choice != 1 && choice != 2 && choice != 3);

	}
	if (character.health <= 0)
	{
		cout << "Health reaches 0, the ogres seize the opportunity and feast on you.";
		cout << "do you want to restart the quest? press y\n";
		string choice1;
		cin >> choice1;
		if (choice1 == "y" || choice1 == "Y")
		{
			mage_quest3();
		}
		else
		{
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << "continuing game....";
			}
		}
	}
	else if (enemy_health.enemyHealth <= 0) {
		cout << "You've defeated the enemy!\n";
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	cout << "Fairy: well done. You proved your legacy. The fairy flies towards the defeated ogre and retrieves the key and brings it to you.";
	
	int user_input1 = 0;
	
	do {
		cout << "\npress 1 to add inventory";
		cin >> user_input1;
		if (user_input1 == 1) {
			mage_inventory + "\t key ";
			cout << "\nkey is added to inventory\n";
		}
		else {
			cout << "\ninvalid command";

		}
	} while (user_input1 != 1);

}
void mage_quest4()     /// quest 4
{
	cout << endl;
	cout << "Quest 4: SAVING ROYAL KIDS\n";
	cout << "Difficulty level = medium\n";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();

	int choice;
	cout << "Fairy: “Take this key and unlock that door (Press enter to unlock)”";
	cin.ignore();
	cout << "\n You seize the key, unlocking the door to the room. As it creaks open, you find the prince and princess surrounded by mummies with no escape.";
	cin.ignore();
	cout << "\n\nFairy:These mummies are the people of Eldoria.Use your spell from the spell book to save them.\nChoices:\n1.Reversal spell\n2.Fire Spell\n3.Vanish Spell\n";
	cin >> choice;
	if (choice == 1)
	{
		cout << "You open your spellbook, lift your wand, and recite the spell of reversal. With a flick of your wrist, the mummies are transformed back into humans, saved from the ancient curse.";
		character.xp += 25;
		character.level++;
		cout << "your level increased\n";
		cout << "\n your new level is" << character.level;
	}
	else if (choice == 2)
	{
		cout << "You open your spellbook and lift you wand. You recite the spell of fire and with a flick of your wrist a stream of fire comes out of your wand setting fire to all the mummies and children. You failed.";
		int retry;
		do {
			cout << "\n you failed your mission\t do youwant to retry? press 1";
			cin >> retry;
			if (retry == 1) {
				mage_quest4();
			}
			else {
				cout << "invalid choice";
			}
		} while (retry != 1);
	}
	else if (choice == 3)
	{
		cout << "You open your spellbook and lift you wand. You recite the spell of vanish and with a flick of your wrist the room turns cloudy, all the mummies and children have vanished into thin air. You failed.";
		int retry;
		do {
			cout << "\n you failed your mission\t do youwant to retry? press 1";
			cin >> retry;
			if (retry == 1) {
				mage_quest4();
			}
			else {
				cout << "do you want to exit game?\n press 1 if yes \n";
				cin >> choice_exit;
				if (choice_exit == 1) {
					exit_game();
				}
				else {
					cout << "continuing game....";
				}
			}
		} while (retry != 1);

	}
	else {
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}

}
void mage_quest5()
{
	cout << "Quest 5: THE FINAL SHOWDOWN WITCH\'S LAIR\n";
	cout << "Difficulty level = hard";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();
	cout << "Fairy:I'll escort these people back to their homes. It's now your duty to confront the witch for the sake of Eldoria.\n";
	cin.ignore();
	cout << "You:I understand the weight of my responsibility.\n";
	cin.ignore();
	cout << "Suddenly, echoing footsteps reverberate, and you turn to face the malevolent witch.\n";
	cin.ignore();
	cout << "Witch:I sensed a disturbance.Who would have thought a mage from the esteemed Stormweaver clan would infiltrate my castle ? ";
	cin.ignore();
	cout << "The witch's gaze falls upon the hostages behind you.\n";
	cin.ignore();
	cout << "Witch:MY HOSTAGES!Stormweavers always play the hero, but have you forgotten what I did to your grandfather ? It seems you're eager to relive history.\n";
	cin.ignore();
	cout << "You:History may repeat, but this time, with a twist.Truth will prevail.";
	cin.ignore();
	cout << "Enraged, the witch harnesses her magic, seizing you and hurling you into the corner of the room.";
	while (character.health > 0 && enemy_health.enemyHealth > 10)
	{
		int choice;
		cout << "\nChoices:\n1.Use fire\n2.Levitate\n3.Curse\n";
		cin >> choice;
		do {
			if (choice == 1)
			{
				rng();
				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "You focus your energy, pointing your wand towards the witch. A burst of intense flames engulfs her, causing her to burn in searing fire.(Successful)";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "A burst of intense flames engulfs catches you.";
					character.health -= 10;
					cout << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else
					cout << "Invalid number:";
			}
			else if (choice == 2)
			{
				rng();
				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << "you will float above the ground and hover you will not get health damage(successful)";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "You will float but her magic will catch you (unsuccessful).";
					character.health -= 10;
					cout << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				}
				else
					cout << "Invalid number:";
			}
			else if (choice == 3)
			{
				rng();
				if (rand_number >= 1 && rand_number <= 50)
				{
					cout << ": you will open your spell book and read the curse spell to reflect her attack and it hits(successful)";
					cout << endl;
					character.xp += 5;
					cout << "you have gained xp \nYour xp is:" << character.xp;
					enemy_health.enemyHealth -= 20;
					cout << endl;
					cout << "Enemy health: " << enemy_health.enemyHealth;
					cout << endl;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else if (rand_number > 50 && rand_number <= 90)
				{
					cout << "you will open your spell book and read the curse spell to reflect her attack but she shields herself(unsuccessful)";
					character.health -= 10;
					cout << character.health;
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

					// enemy's turn
					cin.ignore();
					enemy_attack(1, 50, 51, 100);
					cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				}
				else
					cout << "Invalid number:";
			}
			else
				cout << "Invalid number:";

		} while (choice != 1 && choice != 2 && choice != 3);
	}
	if (enemy_health.enemyHealth < 10)
	{
		string seal = "";
		cout << "Fairy:" << character.name << ", she is immortal you must seal her away.\n";
		cin.ignore();
		cout << "<Type S to SEAL>";
		getline(cin, seal);
		if (seal == "S" && seal == "s") {
			cout << "\nYou open your spellbook and hold up your wand, you recite the sealing spell and the witch is sealed in your book foreverYou have defeated the malevolent witch.You have saved the kingdom of eldoria.";
		}
		if (character.xp >= 25) {
			character.level++;
		}
		cout << "do you want to exit game?\n press 1 if yes \n";
		cin >> choice_exit;
		if (choice_exit == 1) {
			exit_game();
		}
		else {
			cout << "continuing game....";
		}
	}
	else if (character.health <= 0)
	{
		cout << "Health reached 0, you died :(";
		cout << "do you want to restart the quest? press y\n";
		string choice1;
		cin >> choice1;
		if (choice1 == "y" || choice1 == "Y")
		{
			mage_quest5();
		}
		else
		{
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << ">>>>>>>>>>>>>>>>>>>>>THE END<<<<<<<<<<<<<<<<<<<<<<<";
			}
		}
	}
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<ROGUE>>>>>>>>>>>>>>>>>>>>>>>
void rogueQuest1() {
	cout << "Quest 1: MYSTERIOUS BUT POWERFUL\n";

	cout << "Difficulty level = intermidiate";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();

	cout << "<<Scene 1:>>\n You work as a servant in castle’s kitchen to gather information about the raiding gangs.One day you were helping in setting food on royal table for dinner of all te ministers of kingdom of eldoria with king.You heard a minister saying\n";
	cin.ignore();
	cout << "Minister: near the territory of my tribe in the dark woods the cases of raidings are increasing \n";
	cin.ignore();
	cout << "King: what! raiding in my kingdom (smash the table) who is responsible for this ?\n";
	cin.ignore();
	cout << "Minister: the greedy ogre tribe of the kingdom is putting traps in ways of carvans to trap and raid travellers.\n";
	cin.ignore();
	cout << "<<<You are are all ears listening to the conversation.>>>\n";
	cout << "King: on which way exactly they put traps?\n";
	cin.ignore();
	cout << "Minister: the way between mongora and tornado tribe near the mountains, they do this every night and kill the people they raid.\n";
	cin.ignore();
	cout << "<<<<You got out of the castle in hurry wearing your cloak having your poisoned knife and arrows with bow in your satchel you went straight to the location and spotted the ogres hiding behind the small heap of a mountain you are sitting on the top of mountain  witnessing a caravan coming from the other side you have to make quick choices to kill the ogres to save the innocents .>>>>\n";
	cout << "<<<Let\'s Start!!>>>\n";
	cin.ignore();
	cout << "You are witnessing an ogre hiding behind the tree. Near the top of mountain, you have to kill him first. you will sneak around and kill him before he catches you now you are hiding behind the tree but he doesn’t know :\n";
	cout << "\n";
	while (character.health > 0 && enemy_health.enemyHealth > 0) {
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------ \n";
		int choice;
		cout << "Choices:\n 1. stab him in the back \n2. use poisoned arrow\n 3. evade \n";
		cin >> choice;
		if (choice == 1) {
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit) you will kill him by stabbing in the back and putting your hand infront of his mouth other ogres will remain unaware ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit): the attack will be missed and he will catch you ( attack again)";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn

				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cin.ignore();
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else
				cout << "Invalid number:";
		}
		else if (choice == 2)
		{
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit): You will shoot your arrow towards him he will shout  other ogres will hear noise and become curious..";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "\nEnemy health: " << enemy_health.enemyHealth;


				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit):the attack will be missed and he will catch you ( attack again) ";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else
				cout << "Invalid number:";
		}
		else if (choice == 3)
		{
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful evasion) you evaded successfully! but attack again to kill him. ";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful evasion): attack again ";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}

			else
				cout << "Invalid number:";
		}
		else {
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << "continuing game....";
			}
		}
	}

	//scene 2
	cout << "<<<Scene 2>>>\n";
	cout << "one ogre is hiding in a huge bush and you spotted him raising fired arrow towards the caravan you should be quick handling this situation kill him before he kills the whole caravan because caravan has oil containers in loading.\n";
	cout << "\nsave the caravan by taking quick and best decision" << endl;
	while (character.health > 0 && enemy_health.enemyHealth > 0) {
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------ \n";
		int choice;
		cout << "Choices:\n 1. stab him in the back \n2. use poisoned arrow\n 3. evade \n";
		cin >> choice;
		if (choice == 1) {
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit) you will kill him by stabbing in the back and putting your hand infront of his mouth other ogres will remain unaware ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit): the attack will be missed and he will catch you ( attack again)";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			}
			else
				cout << "Invalid number:";
		}
		else if (choice == 2)
		{
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit) You will shoot your arrow towards him he will shout  other ogres will hear noise and become curious..";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "\nEnemy health: " << enemy_health.enemyHealth;


				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit)the attack will be missed and he will catch you ( attack again) ";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				enemy_attack(1, 40, 41, 100);

			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else
				cout << "Invalid number:";
		}
		else if (choice == 3)
		{
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful evasion) you evaded successfully! but attack again to kill him. and dont be late! ";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful evasion): attack again ";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}

			else
				cout << "Invalid number:";
		}
		else {
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << "continuing game....";
			}
		}
	}
	//scene 3
	cout << "<<<Scene 3>>>\n";
	cout << "You spotted that the king’s army of knights ran in the battle field and is confronting ogres one horse rider is fallen on the ground by an ogre and he is going to hit  by ogre’s club. You should be quick taking decision:\n";
	cout << "\nRemember he is far and you should be hiding:" << endl;
	while (character.health > 0 && enemy_health.enemyHealth > 0) {
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------ \n";
		int choice;
		cout << "Choices:\n 1.stab him in the back \n2.use poisoned arrow\n 3.evade \n";
		cin >> choice;
		if (choice == 1) {
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit) you will kill him by stabbing in the back and putting your hand infront of his mouth other ogres will remain unaware ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit): the attack will be missed and he will catch you ( attack again)";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number:";
		}
		else if (choice == 2)
		{
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful hit) You will shoot your arrow towards him he will shout  other ogres will hear noise and become curious..";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cout << "\nEnemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful hit)the attack will be missed and he will catch you ( attack again) ";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
			}
			else
				cout << "Invalid number:";
		}
		else if (choice == 3)
		{
			rng();
			if (rand_number >= 1 && rand_number <= 70)
			{
				cout << "(successful evasion) you evaded successfully! but attack again to kill him. and dont be late! ";
				enemy_health.enemyHealth -= 20;
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				cout << "Enemy health: " << enemy_health.enemyHealth;
				// <<<<<<<<<<<<<<enemy's turn>>>>>>>>>>>>>>>>>
				enemy_attack(1, 40, 41, 100);
			}
			else if (rand_number > 70 && rand_number <= 90)
			{
				cout << "(unsuccessful evasion): attack again ";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				//<<<<<<<<<<<<<<<<<<< enemy's turn>>>>>>>>>>>>
				enemy_attack(1, 40, 41, 100);
			}

			else
				cout << "Invalid number:";
		}
		else {
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << "continuing game....";
			}
		}
	}
}
//>>>>>>>>>>>>>>>>>>>>>>
void rogueQuest2() {
	cout << "Quest 2: <<<<<THE KEY!>>>>>\n";

	cout << "Difficulty level = medium";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();

	int user_input;
	//	<<<<<<<<<<<<<<<<<scene1>>>>>>>>>>>>>>>>>>>>>>>>

	cout << "<<<Scene 1>>>:\n The ogres raided a whole tribe, killed innocents and stolen all the valuables from the tribe this news reached the castle but the corrupted ministers didn’t tell the king about this and did an agreement with bloodhammers. You have to locate the treasure’s location for this you have to go to Bloodhammer Tribe (tribe of ogres) because the map is in the castle which is located in the middle of tribe.\n\nYou are standing infront of bloodhammer tribe and your friend eagle with his sharp vision is there to help you.You will look from a tower on the mountain near the blood hammer tribe.\n";
	do {
		cout << "Press1 to see from your binoculars\n";
		cin >> user_input;

		if (user_input == 1) {

			cout << "now you’re seeing the whole tribe clearly now count the number of guards and their positions also observe their routine.\n";
		}
		else {
			cout << "invalid input \t try Again!";
		}
	} while (user_input != 1);
	cout << "You have observed the routines and roadmaps of guards \n Good Job! Now enter the tribe to buy something they will let you enter.\n";

	//	<<<<<<<<<<<<<<<<<scene 2 >>>>>>>>>>>>>>>>>>>>>>>>
	cout << "Now you are inside the castle in its market buying some apples <3(gaining info about the guard that has the key to throne room)\n";

	do {
		cout << "Press 1: Information gained.";
		cin >> user_input;

		if (user_input == 1) {

			cout << "Information gained successfully!\n";
		}
		else {
			cout << "invalid input \t try Again!\n";
		}
	} while (user_input != 1);
	while (character.health > 0 && enemy_health.enemyHealth > 0)
	{
		cout << "You must get the keys of throne room that is in the pocket of Bramblefur (ogre guarding throne room having a huge club in his hands and key to the throne room in his pocket)\nFor this you have to distract him or kill him(better to distract) :\n";
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------ \n";
		int choice;
		cout << "Choices:\n1 whistle first to distract.\n2 use arrows to kill.";
		cin >> choice;

		if (choice == 1) {
			rng();
			if (rand_number >= 1 && rand_number <= 60)
			{
				cout << "(successful hit) you will whistle from one end of the corridor he will come to see if there is someone and you will attack him from back with your poisoned dagger and close his mouth from your hands. ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 60 && rand_number <= 90)
			{
				cout << "(unsuccessful hit): the attack will be missed and he will catch you ( attack again)";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(successful hit) you will whistle from one end of the corridor he will come to see if there is someone and you will attack him from back with your poisoned dagger and close his mouth from your hands. ";
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number:";
		}

		if (choice == 2) {
			rng();
			if (rand_number >= 1 && rand_number <= 60)
			{
				cout << "(successful hit) you will attack him directly by your poisoned arrow. the ogre will be hit by your arrow and will be killed.. ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 60 && rand_number <= 90)
			{
				cout << "(unsuccessful hit): the attack will be missed and he will catch you ( attack again)";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << " critical hit:  you will attack him directly by your poisoned arrow. the ogre will be hit by your arrow and will be killed.\n(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number:";
		}
	}
	if (enemy_health.enemyHealth > 0) {
		int retry;
		cout << "\n You could not get the keys! Misiion Failed\n Ogres caught you and threw you in a dungeon\n ";
		cout << "for retry press 1";
		cin >> retry;
		if (retry == 1) {
			rogueQuest2();
		}
	}
	else {
		cout << " You defeated the ogre and now you have keys to the throne room.\n go and steal the map quickly!!!!\n";
		cout << "\npress 1 to add inventory";
		int user_input1 = 0;
		cin >> user_input1;
		do {
			if (user_input1 == 1) {
				rogue_inventory + "\t key";
				cout << "\nkey to throne room is added to inventory\n";
			}
			else {
				cout << "\ninvalid command";
			}
		} while (user_input1 != 1);
		if (character.xp >= 25) {
			character.level++;
			cout << "Level Upgraded!\n Your new level is\n" << character.level;
			cout << "do you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << "continuing game....";
			}
		}
	}

}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void rogueQuest3() {
	//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<FINAL Battle>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	cout << "Quest 3: THE TREASURE HUNT\n";

	cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<FINAL Battle>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
	character.xp = 0;
	character.health = 100;
	enemy_health.enemyHealth = 100;
	characterInfo();
	cout << "Difficulty level = Hard";
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------ \n";
	cout << "\nNow you remembered the map and located the treasure but the problem is the treasure lies in the secret room of that castle now you have to gain information about the secret rooms how many guards it has has and on which floor it is located.\n	You asked from a few sellers in the market and gained necessary information as the secret room has 3 guards and it is on 4th floor\n";

	cout << "You are on the back of the castle to jump from the windows and go to the secret room un moticed.\n";
	while (character.health > 0 && enemy_health.enemyHealth > 0)
	{
		cout << "You’ve reached floor floor you are noticing the guards now you have 2 options:\n1	attack from your dagger\n2	attack from arrow	\n3	evade\n";
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		int choice;
		cin >> choice;

		if (choice == 1) {
			rng();
			if (rand_number >= 1 && rand_number <= 50)//difficulty level increased
			{
				cout << "(successful hit) : you will rise from the window and attack the first ogre you successfully kept him silent.\n He has been killed!!!\n now attack the second !!\n you successfully kept him silent you killed him \nnow attack the third  you successfully kept him silent you killed them all...\n ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 50 && rand_number <= 90)
			{
				cout << "(unsuccessful hit): You attacked one ogre and the others noticed they ran towards you and hit you by their spiked club.";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(successful hit): you will rise from the window and attack the first ogre you successfully kept him silent.\n He has been killed!!!\n now attack the second !!\n you successfully kept him silent you killed him \nnow attack the third  you successfully kept him silent you killed them all...\n ";
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cin.ignore();
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number:";
		}
		//choice 2
		if (choice == 2) {
			rng();
			if (rand_number >= 1 && rand_number <= 50)
			{
				cout << "(successful hit) : good choice1\n you will hide behind the window and attack first he will be killed then youll hide again and you threw 2 arrows simaltanneously and the ogres were killed completely....\n ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 50 && rand_number <= 90)
			{
				cout << "(unsuccessful hit):You attacked one ogre and the others noticed they ran towards you and hit you by their spiked club.";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "(successful hit) : good choice1\n you will hide behind the window and attack first he will be killed then youll hide again and you threw 2 arrows simaltanneously and the ogres were killed completely....\n ";
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cin.ignore();
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number:";
		}
		//choice 3
		if (choice == 3) {
			rng();
			if (rand_number >= 1 && rand_number <= 50)
			{
				cout << "\n(successful hit) : you evaded from there successfully but you have to attack again.....\n ";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 50 && rand_number <= 90)
			{
				cout << "(unsuccessful hit):Your evasion wasn’t successful they noticed you now attack again or evde again";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number:";
		}
	}//while statement
	cout << "\nYou found the secret room’s key and entered there you must fight with 2 more ogres who are guarding the treasure inside the room \n";
	int user_input1 = 0;
	do {
		cout << "\npress 1 to add inventory";
		cin >> user_input1;
		if (user_input1 == 1) {
			rogue_inventory + "\t key";
			cout << "\nkey to secret room is added to inventory\n";
		}
		else {
			cout << "\ninvalid command";
		}
	} while (user_input1 != 1);
	while (character.health > 0 && enemy_health.enemyHealth > 0)
	{
		cout << "1.hide behind the window then attack from poisoned dagger\n 2. hide behind the door and attack from poisoned arrows\n";
		cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\nChoices: \n";
		int choice;
		cin >> choice;
		if (choice == 2) {
			rng();
			if (rand_number >= 1 && rand_number <= 50)
			{
				cout << " sucessful hit:good choice!!!\n . you will hide behind the window and attack first he will be killed\n then youll hide again and you threw 2 arrows at a time and the ogres were killed completely.\n";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 50 && rand_number <= 90)
			{
				cout << "(unsuccessful hit): You attacked one ogre and the others noticed they ran towards you and hit you by their spiked club you got damage!!!\n.";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "good choice!!!\n . you will hide behind the window and attack first he will be killed\n then youll hide again and you threw 2 arrows at a time and the ogres were killed completely.\n";
				cout << "(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cin.ignore();
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number:";
		}
		if (choice == 1) {
			rng();
			if (rand_number >= 1 && rand_number <= 50)
			{
				cout << "successful: You went from the door and attacked the first ogre \n You successfully kept him silent.He has been killed!!!!\n now attack the second you successfully kept him silent you killed them both!!\n";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 50 && rand_number <= 90)
			{
				cout << "\n(unsuccessful hit): You attacked one ogre and the others noticed they ran towards you and hit you by their spiked club.";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 90 && rand_number <= 100) {
				cout << "  You went from the door and attacked the first ogre \n You successfully kept him silent.He has been killed!!!!\n now attack the second you successfully kept him silent you killed them both!!\n";
				cout << "\n(critical hit) Great job! You caused double damage! ";
				enemy_health.enemyHealth -= 40;
				cout << endl;
				character.xp += 10;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				// enemy's turn
				cin.ignore();
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number";
		}
		if (choice == 3) {
			rng();
			if (rand_number >= 1 && rand_number <= 50)
			{
				cout << " successful :good choice!!!\n . you evaded from there successfully but you have to attack again......\n";
				cout << endl;
				character.xp += 5;
				cout << "you have gained xp \nYour xp is:" << character.xp;
				enemy_health.enemyHealth -= 20;
				cout << endl;
				cout << "Enemy health: " << enemy_health.enemyHealth;
				cout << endl;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else if (rand_number > 50 && rand_number <= 90)
			{
				cout << "(unsuccessful hit):  our evasion wasn’t successful they noticed you now attack again or evde again!!!\n.";
				character.health -= 10;
				cout << character.health;
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

				// enemy's turn
				cin.ignore();
				enemy_attack(1, 40, 41, 100);
				cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
			else
				cout << "Invalid number:";
		}//
	}// while 
	if (enemy_health.enemyHealth > 0) {
		cout << "\nYOU DIED! Misiion Failed\n ";
		cout << "do you want to exit game?\n press 1 if yes \n";
		if (choice_exit == 1) {
			exit_game();
		}
		else {

			rogueQuest3();
		}
	}
	else {
		cout << "WELL DONE! YOUVE GOT THE TREASURE!!";
		cout << "\npress 1 to add inventory";
		int user_input1 = 0;
		cin >> user_input1;
		do {
			if (user_input1 == 1) {
				rogue_inventory + "\t TREASURE";
				cout << "\nTreaure is added to inventory\n";
			}
			else {
				cout << "\ninvalid command";
			}
		} while (user_input1 != 1);
		cout << "\n With the stolen treasure in your possession,you told him about the corrupted ministers.\n Your persuasive appeal to use the recovered wealth to fuel a decisive war against the ogres resonated with the king's sense of justice.\nAs you handed over the list of traitors, you stressed the urgency of rooting out the internal threat that had allowed the ogres to wreak havoc on innocent tribes.\n.\n.\n.\nThe king, fueled by a mix of gratitude and righteous anger, nodded in agreement. \n With determination in his eyes, he ordered the mobilization of the kingdom's forces to confront the Bloodhammers and bring justice to those who had betrayed the realm.\nThe king, acknowledging your crucial role in uncovering the conspiracy, offered you a reward for your services.You, however, chose to remain a shadow in the kingdom, preferring the anonymity that allowed you to move freely in the shadows. \n.\n.\n.\nthanks to the rogue who had uncovered the truth and set the wheels of justice in motion.\n";
		if (character.xp >= 25) {
			character.level++;
			cout << "Level Upgraded!\n Your new level is" << character.level;
			cout << "\ndo you want to exit game?\n press 1 if yes \n";
			cin >> choice_exit;
			if (choice_exit == 1) {
				exit_game();
			}
			else {
				cout << ">>>>>>>>>>>>>>>>THE END<<<<<<<<<<<<<<<<<<<<<";
			}
		}
	}
}//quest 3kk
