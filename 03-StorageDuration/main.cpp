#include <iostream>
#include <string>
#include <random>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

/** WALKTHROUGH ACTIVITY **/
struct Weapon
{
	int bluntDamage;
	int magicDamage;
	int bladeDamage;

	struct OwnerInfo
	{
		int playerID;
		bool isRare;
	};

	OwnerInfo owner;

	int& value;
};

void EnhanceWeapon(Weapon weapon)
{
	weapon.bladeDamage *= 2;
	weapon.bluntDamage *= 2;
	weapon.magicDamage *= 2;
}

int Sum(int a, int b, int c)
{
	return c = a + b;
}

/** CLOSED ACTIVITIES **/

//2.) Product of Two Floats
void Product(float a, float b, float &c);

/** OPEN ACTIVITIES **/

//1.) Swap
void Swap(float &a, float &b);

//2.) Aussiegochi

struct Aussiegochi
{
	float happiness;
	float hunger;
	float thirst;
	float sanity;

	float maxHappiness;
	float maxHunger;
	float maxThirst;
	float maxSanity;

	float minHappiness;
	float minHunger;
	float minThirst;
	float minSanity;

	bool isDead;

};

void FeedAussie(Aussiegochi aus);
void WaterAussie(Aussiegochi aus);
void AbuseAussie(Aussiegochi aus);
void CoddleAussie(Aussiegochi aus);
void PrintAussieStats(Aussiegochi aus);

//3.) Mixtape
struct Track
{
	std::string trackName;
	float playTime;
};

struct Playlist
{
	std::string playlistName;
	Track* trackList;
	int trackCount;
};

void printPlaylist(const Playlist &pl);
void shufflePlaylist(Playlist &pl);
void dedupePlaylist(Playlist &pl);


int main()
{
	///** WALKTHROUGH ACTIVITY **/
	//// References
	//int hotdog = 10; // Primitive variable
	//int& dinosaur = hotdog; // Reference to hotdog
	//int* dinosaurPtr = &hotdog; // Pointer to hotdog

	//int tacos = hotdog; // Only copies the value of hotdog

	//hotdog = 15;

	//cout << "hotdog: " << hotdog << endl; // changes value
	//cout << "dinosaur: " << dinosaur << endl; // changes value
	//cout << "dinosaurPtr: " << *dinosaurPtr << endl; // changes value

	//cout << "tacos: " << tacos << endl; // still 10

	//// References with Functions

	//int valA = 1;
	//int valB = 2;
	//int valC = -1;

	//cout << Sum(valA, valB, valC) << endl;

	//Weapon hammer = {9001, 0, 0, {0, false}, valA };
	//hammer.bladeDamage = 0;
	//hammer.bluntDamage = 10;
	//hammer.magicDamage = 0;

	//cout << "BLADE " << hammer.bladeDamage << endl;
	//cout << "BLUNT: " << hammer.bluntDamage << endl;
	//cout << "MAGIC: " << hammer.magicDamage << endl;

	//EnhanceWeapon(hammer);

	//cout << "BLADE " << hammer.bladeDamage << endl;
	//cout << "BLUNT: " << hammer.bluntDamage << endl;
	//cout << "MAGIC: " << hammer.magicDamage << endl;

	//int thing = -12;

	//Weapon arsenal[3] = 
	//{
	//	//Blunt       Magic       Blade        PlayerID             Rarity
	//	{9001,          0,          0,         {  0,                  true}, thing},
	//	{0,             9001,       0,         {  0,                  true}, thing},
	//	{0,             0,           8999,     {  0,                  false}, thing}
	//};

	//for (int i = 0; i < 3; ++i)
	//{
	//	int &pid = arsenal[i].owner.playerID;
	//	cout << "PlayerID: " << pid << endl;

	//	if (pid == 0)
	//		pid = i+1;

	//	cout << "PlayerID: " << pid << endl;
	//}

	//cout << endl;
	//cout << endl;
	//cout << endl;

	///** CLOSED ACTIVITIES **/

	////1.) Creating Refereneces
	//
	//// Variables
	//int var1 = 10;
	//float var2 = 23.3f;
	//bool var3 = false;
	//char var4 = 'c';

	//// Variable Refereneces
	//int &var1Ref = var1;	
	//float &var2Ref = var2;	
	//bool &var3Ref = var3;	
	//char &var4Ref = var4;

	////2.) Product of Two Floats
	//float a1 = 5.f;
	//float b1 = 5.f;
	//float c1 = 0.f;

	//Product(a1, b1, c1);
	//cout << "Product of a1 * b1: " << c1 << endl;
	//cout << endl;

	//float a2 = 1.5f;
	//float b2 = 3.f;
	//float c2 = 0.f;

	//Product(a2, b2, c2);
	//cout << "Product of a2 * b2: " << c2 << endl;
	//cout << endl;

	//float a3 = 7.2f;
	//float b3 = 4.f;
	//float c3 = 0.f;

	//Product(a3, b3, c3);
	//cout << "Product of a3 * b3: " << c3 << endl;
	//cout << endl;
	//cout << endl;

	///** OPEN ACTIVITIES **/

	////1.) Swap

	//cout << "a1 Before Swap: " << a1 << endl;
	//cout << "a1 Before Swap: " << b1 << endl;
	//Swap(a1, b1);
	//cout << "a1 After Swap: " << a1 << endl;
	//cout << "b1 After Swap: " << b1 << endl;

	//cout << endl;

	//cout << "a2 Before Swap: " << a2 << endl;
	//cout << "a2 Before Swap: " << b2 << endl;
	//Swap(a2, b2);
	//cout << "a2 After Swap: " << a2 << endl;
	//cout << "b2 After Swap: " << b2 << endl;
	//
	//cout << endl;

	//cout << "a3 Before Swap: " << a3 << endl;
	//cout << "a3 Before Swap: " << b3 << endl;
	//Swap(a3, b3);
	//cout << "a3 After Swap: " << a3 << endl;
	//cout << "b3 After Swap: " << b3 << endl;

	//cout << endl;
	//cout << endl;
	//cout << endl;

	////2.) Aussiegochi
	//char userInput;
	//Aussiegochi pet = 
	//{
	// // happiness            hunger            thirst           sanity          maxHappiness    maxHunger    maxThirst   maxSanity    minHappiness   minHunger     minThirst      minSanity      isDead
	//	1.f,                  0.f,              0.0f,            1.f,              1.f,          1.f,         1.f,         1.f,         0.f,          0.f,          0.f,          0.f,          false
	//};

	//while (!pet.isDead)
	//{
	//	cout << "What would you like to do? {f}Feed, {w}Water, {a}Abuse, {c}Coddle, {q}Quit: ";

	//	pet.happiness -= .1f;
	//	pet.hunger += .1f;
	//	pet.thirst += .1f;

	//	cin >> userInput;

	//	if (userInput == 'f' || userInput == 'F')
	//	{
	//		FeedAussie(pet);
	//		userInput = ' ';
	//	}
	//	else if (userInput == 'w' || userInput == 'W')
	//	{
	//		WaterAussie(pet);
	//		userInput = ' ';
	//	}
	//	else if (userInput == 'a' || userInput == 'A')
	//	{
	//		AbuseAussie(pet);
	//		userInput = ' ';
	//	}
	//	else if (userInput == 'c' || userInput == 'C')
	//	{
	//		CoddleAussie(pet);
	//		userInput = ' ';
	//	}
	//	else if (userInput == 'q' || userInput == 'Q')
	//	{
	//		break;
	//	}
	//	else
	//		cout << "You didn't choose a valid option. Try again!" << endl;

	//	PrintAussieStats(pet);

	//	if (pet.hunger == pet.maxHunger || pet.thirst == pet.maxThirst || pet.happiness == pet.minHappiness || pet.sanity == pet.minSanity)
	//	{
	//		cout << "You killed your pet!" << endl;
	//		pet.isDead = true;
	//	}

	//}

	//3.) Mixtape
	Track* tracks = new Track[5];

	tracks[0].playTime = 03.48f;
	tracks[0].trackName = "HiFi Roller Derby";

	tracks[1].playTime = 38.21f;
	tracks[1].trackName = "DJ Ezzy's Summer Bubbleshoot Live Show";

	tracks[2].playTime = 05.12f;
	tracks[2].trackName = "Dark Descent";

	tracks[3].playTime = 02.25f;
	tracks[3].trackName = "Ride to Atlantis, Washington";
	
	tracks[4].playTime = 01.15f;
	tracks[4].trackName = "Air on a %#!@ String";

	Playlist playlist = { "Bryan's Playlist", tracks, 5 };

	printPlaylist(playlist);
	shufflePlaylist(playlist);
	cout << endl;
	printPlaylist(playlist);
	dedupePlaylist(playlist);
	cout << endl;
	printPlaylist(playlist);

	cout << endl;
	system("pause");

	return 0;
}

/** CLOSED ACTIVITIES **/

//2.) Product of Two Floats
void Product(float a, float b, float &c)
{
	c = a * b;
}


/** OPEN ACTIVITIES **/

//1.) Swap
void Swap(float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}

//2.) Aussiegochi
void FeedAussie(Aussiegochi aus)
{
	// If the pet is hungry
	if (aus.hunger > aus.minHunger)
	{
		// Subtract .5 from the hunger level
		aus.hunger -= .2f;

		// If the subtraction makes the hunger level less than physically possible
		if (aus.hunger < aus.minHunger)
			// Set it back to the least hunger level
			aus.hunger = aus.minHunger;
	}
	

	// If the happiness level is less than the max happiness level
	if (aus.happiness < aus.maxHappiness)
	{
		// Add .3 to the happiness level
		aus.happiness += .3f;

		// If the addition to the happiness level is greater than the max happiness level
		if (aus.happiness > aus.maxHappiness)
			// Set the happiness level back to its max
			aus.happiness = aus.maxHappiness;
	}
}

void WaterAussie(Aussiegochi aus)
{
	// If the pet is thirsty
	if (aus.thirst > aus.minThirst)
	{
		// Subtract .2 from the thirst (making the pet less thirsty)
		aus.thirst -= .2f;

		// If the subtraction makes the pet less thirsty than physically possible
		if (aus.thirst < aus.minThirst)
			// Set it back to the least possible thirsty level
			aus.thirst = aus.minThirst;
	}

	// If the pet is less than the max happiness level
	if (aus.happiness < aus.maxHappiness)
	{
		// Add .3 to the happiness level
		aus.happiness += .3f;

		// If the happiness level is more than the max happiness level
		if (aus.happiness > aus.maxHappiness)
			// Set the happiness level back to its max
			aus.happiness = aus.maxHappiness;
	}
}

void AbuseAussie(Aussiegochi aus)
{
	// If the pet is less than the max sanity level
	if (aus.sanity <= aus.maxSanity)
	{
		// Take away .2 from both the sanity and happiness levels
		aus.sanity -= .2f;
		aus.happiness -= .2f;		
	}
}

void CoddleAussie(Aussiegochi aus)
{
	// If the pet is less than the max sanity level
	if (aus.sanity < aus.maxSanity)
	{
		// Take away .3 from both the sanity and happiness levels
		aus.sanity += .3f;
		aus.happiness += .3f;
	}

	if (aus.sanity > aus.maxSanity)
		aus.sanity = aus.maxSanity;
}

void PrintAussieStats(Aussiegochi aus)
{
	cout << "Happiness: " << aus.happiness << endl;
	cout << "Hunger: " << aus.hunger << endl;
	cout << "Sanity: " << aus.sanity << endl;
	cout << "Thirst: " << aus.thirst << endl;
}

//3.) Mixtape
void printPlaylist(const Playlist &pl)
{
	float time = 0;
	int min = 0;
	int sec = 0;
	for (int i = 0; i < pl.trackCount; ++i)
	{
		time = pl.trackList[i].playTime;
		min = (int)time;
		sec = (pl.trackList[i].playTime - (int)pl.trackList[i].playTime) * 100;
		if (pl.trackList[i].trackName != " ")
		{
			if (min < 10)
				cout << "[0" << min << ":" << sec << "]" << " - " << pl.trackList[i].trackName << endl;
			else
				cout << "[" << min << ":" << sec << "]" << " - " << pl.trackList[i].trackName << endl;
		}
	}
}

void shufflePlaylist(Playlist &pl)
{
	srand(time(NULL));
	int counter = rand() % 100;
	Track temp;
	
	while (counter > 0)
	{
		int bogo = rand() % (pl.trackCount - 1);
		temp = pl.trackList[bogo];

		pl.trackList[bogo] = pl.trackList[bogo + 1];

		pl.trackList[bogo + 1] = temp;

		counter--;
	}
}

void dedupePlaylist(Playlist &pl)
{
	for (int i = 0; i < pl.trackCount; ++i)
	{
		for (int j = i + 1; j < pl.trackCount; ++j)
		{
			if (pl.trackList[i].trackName == pl.trackList[j].trackName)
			{
				pl.trackList[j].trackName = " ";
				pl.trackList[j].playTime = 0.f;
			}
		}
	}
}
