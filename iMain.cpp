#include "iGraphics.h"
#include "mmsystem.h"
#include "windows.h"
#pragma comment(lib, "Winmm.lib")

char BackGround[1][20] = {"Land.bmp"};
char Button[4][20] = {"b1.bmp", "rule.bmp", "HighScore.bmp", "characters.bmp"};
char Level[8][20] = {"LBG.bmp", "1.bmp", "2.bmp", "3.bmp", "4.bmp", "5.bmp", "6.bmp", "heading.bmp"};
char particles[3][20] = {"ani1.bmp", "ani2.bmp", "ani3.bmp"};
// char MojoBackGround[23][20] = {"BG\\image1x1.bmp", "BG\\image2x1.bmp", "BG\\image3x1.bmp", "BG\\image4x1.bmp", "BG\\image5x1.bmp", "BG\\image6x1.bmp", "BG\\image7x1.bmp", "BG\\image8x1.bmp", "BG\\image9x1.bmp", "BG\\image10x1.bmp", "BG\\image11x1.bmp", "BG\\image12x1.bmp", "BG\\image13x1.bmp", "BG\\image14x1.bmp", "BG\\image15x1.bmp", "BG\\image16x1.bmp", "BG\\image17x1.bmp", "BG\\image18x1.bmp", "BG\\image19x1.bmp", "BG\\image20x1.bmp", "BG\\image21x1.bmp", "BG\\image22x1.bmp", "BG\\MojoStage.bmp"};
// int BackGround_x[22];


char Level1BackGround[22][30] = {"image_part_001.bmp", "image_part_002.bmp", "image_part_003.bmp", "image_part_004.bmp", "image_part_005.bmp", "image_part_006.bmp",
								 "image_part_007.bmp", "image_part_008.bmp", "image_part_009.bmp", "image_part_010.bmp", "image_part_011.bmp", "image_part_012.bmp",
								 "image_part_013.bmp", "image_part_014.bmp", "image_part_015.bmp", "image_part_016.bmp", "image_part_017.bmp", "image_part_018.bmp",
								 "image_part_019.bmp", "image_part_020.bmp", "image_part_021.bmp", "image_part_022.bmp"};

char Level2BackGround[24][30] = {"level2_1.bmp", "level2_2.bmp", "level2_3.bmp", "level2_4.bmp", "level2_5.bmp", "level2_6.bmp", "level2_7.bmp", "level2_8.bmp",
								 "level2_9.bmp", "level2_10.bmp", "level2_11.bmp", "level2_12.bmp", "level2_13.bmp", "level2_14.bmp", "level2_15.bmp", "level2_16.bmp",
								 "level2_17.bmp", "level2_18.bmp", "level2_19.bmp", "level2_20.bmp", "level2_21.bmp", "level2_22.bmp"};

char Level3BackGround[24][30] = {"00.bmp", "10.bmp", "20.bmp", "30.bmp", "40.bmp", "50.bmp", "60.bmp", "70.bmp", "80.bmp", "90.bmp",
								 "100.bmp", "110.bmp", "120.bmp", "130.bmp", "140.bmp", "150.bmp", "160.bmp", "170.bmp",
								 "180.bmp", "190.bmp", "200.bmp", "210.bmp"};

/*char Level4BackGround[22][30] = {"bg2\\00.bmp", "bg2\\10.bmp", "bg2\\20.bmp", "bg2\\30.bmp", "bg2\\40.bmp", "bg2\\50.bmp", "bg2\\60.bmp",
								 "bg2\\70.bmp", "bg2\\80.bmp", "bg2\\90.bmp", "bg2\\100.bmp", "bg2\\110.bmp", "bg2\\120.bmp",
								 "bg2\\130.bmp", "bg2\\140.bmp", "bg2\\150.bmp", "bg2\\160.bmp", "bg2\\170.bmp", "bg2\\180.bmp",
								 "bg2\\190.bmp", "bg2\\200.bmp", "bg2\\210.bmp"};*/

char Level4BackGround[22][30] = {"01.bmp", "02.bmp", "03.bmp", "04.bmp", "05.bmp", "06.bmp",
								 "07.bmp", "08.bmp", "09.bmp", "level3_10.bmp", "11.bmp", "12.bmp",
								 "13.bmp", "14.bmp", "15.bmp", "16.bmp", "17.bmp", "18.bmp",
								 "19.bmp", "level3_20.bmp", "21.bmp", "22.bmp"};

char HunBun[3][20] = {"hunbun1.bmp", "hunbun2.bmp", "hunbun4.bmp"};
char Dani[3][20] = {"dani.bmp", "dani2.bmp", "dani3.bmp"};
char MinG[3][20] = {"ming1.bmp", "ming2.bmp", "ming3.bmp"};
char Koyang[3][20] = {"koyang1.bmp", "koyang2.bmp", "koyang3.bmp"};
char Hein[3][20] = {"hein1.bmp", "hein2.bmp", "hein3.bmp"};

char Bunnies[8][20] = {"bun_1.bmp", "bun_2.bmp", "bun_3.bmp", "bun_4.bmp", "bun_5.bmp", "bun_6.bmp", "bun_7.bmp", "bun_8.bmp"};
char BackButtons[2][20] = {"backbutton.bmp", "quitbutton.bmp"};
char mojo[2][20] = {"mojo1.bmp", "mojo2.bmp"};
char COINS[7][20] = {"coins1.bmp", "coins2.bmp", "coins3.bmp", "coins4.bmp", "coins5.bmp", "coins6.bmp", "coins7.bmp"};
char Hearts[10][20] = {"heart4.bmp", "heart6.bmp", "heart8.bmp", "heart9.bmp"};
char gameWinImg[2][20] = {"win1.bmp", "win2.bmp"};
char shuttle[3][20] = {"shuttle1.bmp", "shuttle22.bmp", "shuttle2.bmp"};

char gameoverimg[2][15] = {"gameover2.bmp", "gameover3.bmp"};

int part = rand() % 3;
int light = 0;
int coin = 0;
#define screenheight 768
#define screenwidth 1364
#define bg_Pieces 22
#define coinNum 75
#define obstacles_speed 20
int Puff_x = 50, Puff_y = 100;
int Move_Puff = 20;

// int index;

int LandPage = 1;
void DrawLandPage();
void GoToLandPage();

int LevelPage = 0;
void DrawLevelPage();
void GoToLevelPage();

int Charpage = 0;
void DrawCharPage();
void GoToCharPage();

int RulesPage = 0;
void DrawRulesPage();
void GoToRulesPage();

double HealthBar = 195.0;
bool Health_Decrease = false;
int heartInd = 0;
void DrawHealthBar();

int Level1 = 0;
int r = 254, g = 52, b = 126;
void DrawLevel1();
void GoToLevel1();

int Level2 = 0;
void DrawLevel2();
void GoToLevel2();

int Level3 = 0;
void DrawLevel3();
void GoToLevel3();

int Level4 = 0;
void DrawLevel4();
void GoToLevel4();

bool ObsThere = true;
void ObsMove();
void ObsVariables();
void Reset_Level();

void BunnyVariables();
void AddBunny();

void AddCoins();
void coinVariables();

// bool play_crash;
// void Collission_Result();

void Collides_or_Not();
void Reset_Level();

char SCORE[10000];
int count = 0;
int bunSave = 0;
int score = 0;
void coinCollection();
void scoreShow();

void BackgroundRendering();
void BackGroundVariables();

int gameOver = 0;
int gameWin = 0;
int showScore = 0;
int go;
char showIt[10000];
void drawGameOver();
void Quit_Page();
void drawWinPage();
void GoToWinPage();

int nutral = 0;
int mingChoose = 0;
int hunbunChoose = 0;
int daniChoose = 0;
int koyangChoose = 0;
int heinChoose = 0;
void chooseCharacter();

int vil = 0;

bool musicOn = true;

int highScorePage = 0;
void highScore(int showscore, char str3[100]);
void GoToHighSocrePage();
void DrawScorePage();

char str[100], str2[100];
int len;
int mode;
void drawTextBox();

#define ObsNum 30
// bool ObsThere = true;
struct obstacles
{
	int Obs_X;
	int Obs_Y;
	int Bunny_x;
	int Bunny_y;
	bool ObsThere = true;
	bool BunnyThere = true;
};
struct obstacles Bars[ObsNum];
void ObsMove()
{
	for (int i = 0; i < ObsNum; i++)
	{

		if (Bars[i].ObsThere && Level1 == 1)
		{
			iShowBMP2(Bars[i].Obs_X, Bars[i].Obs_Y, "BG\\MojoObs.bmp", 0);
		}
		else if (Bars[i].ObsThere && Level2 == 1)
		{
			iShowBMP2(Bars[i].Obs_X, Bars[i].Obs_Y, "trunk.bmp", 0);
		}
		else if (Bars[i].ObsThere && Level3 == 1)
		{
			iShowBMP2(Bars[i].Obs_X, Bars[i].Obs_Y, "megh.bmp", 0);
		}
		else if (Bars[i].ObsThere && Level4 == 1)
		{
			iShowBMP2(Bars[i].Obs_X, Bars[i].Obs_Y, shuttle[part], 0);
		}
		if (i == ObsNum - 1 && Bars[ObsNum - 1].Obs_X + 500 <= 0)
		{
			ObsThere = false;
		}
		if (Bars[ObsNum - 1].Obs_X <= 0)
		{
			showScore = score;
			drawWinPage();
			// drawGameOver();
			break;
		}
	}
}
void ObsVariables()
{
	for (int i = 0; i < ObsNum; i++)
	{
		Bars[i].Obs_X = screenwidth + 500 * i; //- rand() % 100;
		Bars[i].Obs_Y = 100 + rand() % 300;
		Bars[i].ObsThere = true;
	}
}

obstacles Bunny[ObsNum];
void AddBunny()
{
	if (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1)
	{
		for (int i = 0; i < ObsNum; i++)
		{
			if (Bunny[i].BunnyThere)
			{
				iShowBMP2(Bunny[i].Bunny_x, Bunny[i].Bunny_y, Bunnies[part], 0);
			}
			if ((!Bars[i].ObsThere) && Bunny[i].BunnyThere)
			{
				iShowBMP2(Bunny[i].Bunny_x + 5, Bunny[i].Bunny_y + 52, "!.bmp", 0);
			}
		}
	}
}

void BunnyVariables()
{
	for (int i = 0; i < ObsNum; i++)
	{
		Bunny[i].Bunny_x = Bars[i].Obs_X + 65;
		Bunny[i].Bunny_y = Bars[i].Obs_Y + 85;
		Bunny[i].BunnyThere = true;
	}
}

struct CoinsAdd
{
	int coin_x;
	int coin_y;
	bool CoinShow = true;
};

CoinsAdd Coins[coinNum];

void AddCoins()
{
	for (int i = 0; i < coinNum; i++)
	{
		if (Coins[i].CoinShow)
		{
			iShowBMP2(Coins[i].coin_x, Coins[i].coin_y, COINS[coin], 0);
		}
		for (int j = 0; j < ObsNum; j++)
		{
			if (Coins[i].coin_x + 40 >= Bars[j].Obs_X && Coins[i].coin_x <= Bars[j].Obs_X + 164 && Coins[i].coin_x + 38 >= Bars[j].Obs_X && Coins[i].coin_y <= Bars[j].Obs_Y + 76)
			{
				Coins[i].coin_y += 100;
			}
		}
	}
}
void coinVariables()
{
	for (int i = 0; i < coinNum; i++)
	{
		Coins[i].coin_x = screenwidth + 200 * i;
		Coins[i].coin_y = 300 + rand() % 150;
		Coins[i].CoinShow = true;
	}
}

void chooseCharacter()
{
	if (hunbunChoose)
	{
		iShowBMP2(Puff_x, Puff_y, HunBun[part], 0);
	}
	else if (mingChoose)
	{
		iShowBMP2(Puff_x, Puff_y, MinG[part], 0);
	}
	else if (daniChoose)
	{
		iShowBMP2(Puff_x, Puff_y, Dani[part], 0);
	}
	else if (koyangChoose)
	{
		iShowBMP2(Puff_x, Puff_y, Koyang[part], 0);
	}
	else if (heinChoose)
	{
		iShowBMP2(Puff_x, Puff_y, Hein[part], 0);
	}
}

void DrawHealthBar()
{
	if (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1)
	{
		iShowBMP2(56, 648, Hearts[heartInd], 0);
	}
}

void drawTextBox()
{
	iSetColor(0, 0, 0);
	iRectangle(534, 120, 320, 60);
}

/*
	function iDraw() is called again and again by the system.

	*/

void iDraw()
{
	// place your drawing codes here
	iClear();
	if (LandPage == 1)
	{
		DrawLandPage();
	}

	else if (LevelPage == 1)
	{
		DrawLevelPage();
		HealthBar = 195.0;
		Health_Decrease = false;
	}
	else if (Charpage == 1)
	{
		DrawCharPage();
	}

	else if (highScorePage)
	{
		DrawScorePage();
	}

	else if (RulesPage)
	{
		DrawRulesPage();
	}

	else if (Level1 == 1)
	{
		DrawLevel1();
		/*if (HealthBar == 0) // && Health_Decrease == true && Level1 ==1)
		{
			DrawLevelPage();
		}*/
	}

	else if (Level2 == 1)
	{
		DrawLevel2();
	}

	else if (Level3 == 1)
	{
		DrawLevel3();
	}

	else if (Level4)
	{
		DrawLevel4();
	}

	else if (gameOver == 1)
	{
		drawGameOver();
		iText(970, 340, str, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (gameWin == 1)
	{
		drawWinPage();
		iText(970, 340, str, GLUT_BITMAP_TIMES_ROMAN_24);
	}
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	// place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if ((mx >= 92 && mx <= 298) && (my >= 316 && my <= 468) && LandPage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);

			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			if (mingChoose || hunbunChoose || koyangChoose || daniChoose || heinChoose)
			{
				GoToLevelPage();
				Reset_Level();
			}
			else
			{
				GoToCharPage();
				Reset_Level();
			}
		}
		else if ((mx >= 1107 && mx <= 1262) && (my >= 141 && my <= 270) && LandPage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);

			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToCharPage();
			Reset_Level();
		}

		else if ((mx >= 508 && mx <= 647) && (my >= 357 && my <= 490) && LevelPage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);

			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToLevel1();
			Reset_Level();
		}

		else if ((mx >= 697 && mx <= 837) && (my >= 355 && my <= 487) && LevelPage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);

			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToLevel2();
			Reset_Level();
		}

		else if ((mx >= 508 && mx <= 647) && (my >= 185 && my <= 309) && LevelPage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);

			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToLevel3();
			Reset_Level();
		}

		else if ((mx >= 697 && mx <= 837) && (my >= 185 && my <= 309) && LevelPage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);

			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToLevel4();
			Reset_Level();
		}

		/*////////////////////////////////******************************** I'm Here!!!!!!!!!!...................
				else if ((mx >= 52 && mx <= 140) && (my >= 693 && my <= 726) && LevelPage == 1)
				{
					PlaySound("click.wav", NULL, SND_ASYNC);
					Sleep(300);
					GoToLandPage();
				}
		*/
		else if ((mx >= 52 && mx <= 125) && (my >= 693 && my <= 726) && (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1 || LevelPage == 1))
		{

			PlaySound("click.wav", NULL, SND_ASYNC);

			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			if (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1)
			{
				GoToLevelPage();
				Reset_Level();
			}
			else if (LevelPage == 1)
			{
				GoToLandPage();
			}
		}
		else if (mx >= 50 && mx <= 140 && my >= 50 && my <= 146 && Charpage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);

			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToLandPage();
			Reset_Level();
		}

		else if (mx >= 50 && mx <= 100 && my >= 100 && my <= 136 && LandPage == 1)
		{
			if (musicOn)
			{
				musicOn = false;
				PlaySound(0, 0, 0);
			}
			else
			{
				musicOn = true;
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}

		else if (mx >= 315 && mx <= 537 && my >= 100 && my <= 544 && Charpage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			hunbunChoose = 1;
			mingChoose = 0;
			daniChoose = 0;
			koyangChoose = 0;
			heinChoose = 0;
			nutral = 0;
		}
		else if (mx >= 50 && mx <= 271 && my >= 215 && my <= 655 && Charpage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			hunbunChoose = 0;
			mingChoose = 1;
			daniChoose = 0;
			koyangChoose = 0;
			heinChoose = 0;
			nutral = 0;
		}
		else if (mx >= 580 && mx <= 800 && my >= 206 && my <= 648 && Charpage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			hunbunChoose = 0;
			mingChoose = 0;
			daniChoose = 1;
			koyangChoose = 0;
			heinChoose = 0;
			nutral = 0;
		}
		else if (mx >= 1111 && mx <= 1330 && my >= 209 && my <= 657 && Charpage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			hunbunChoose = 0;
			mingChoose = 0;
			daniChoose = 0;
			koyangChoose = 0;
			heinChoose = 1;
			nutral = 0;
		}

		else if (mx >= 848 && mx <= 1068 && my >= 102 && my <= 544 && Charpage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			hunbunChoose = 0;
			mingChoose = 0;
			daniChoose = 0;
			koyangChoose = 1;
			heinChoose = 0;
			nutral = 0;
		}
		else if (mx >= 64 && mx <= 222 && my >= 660 && my <= 742 && Charpage == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToLandPage();
			Reset_Level();
			nutral = 0;
		}
		else if (Charpage == 1)
		{
			Reset_Level();
			nutral = 1;
		}

		else if ((mx >= 101 && mx <= 298) && (my >= 373 && my <= 444) && gameOver == 1)
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToLevelPage();
			Reset_Level();
		}

		else if (LandPage && (mx >= 1110 && mx <= 1256) && (my >= 366 && my <= 486))
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToHighSocrePage();
		}
		else if (gameOver && (mx >= 850 && mx <= 1270) && (my >= 296 && my <= 383))
		{
			mode = 1;
		}
		else if (gameWin && (mx >= 964 && mx <= 1302) && (my >= 317 && my <= 402))
		{
			mode = 1;
		}
		else if (gameOver && (mx >= 1013 && mx <= 1085) && (my >= 138 && my <= 200))
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			mode = 0;
			GoToLandPage();
			Reset_Level();
		}
		else if (gameWin && (mx >= 1106 && mx <= 1167) && (my >= 200 && my <= 245))
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			mode = 0;
			GoToLandPage();
			Reset_Level();
		}

		else if ((highScorePage || RulesPage) && (mx >= 60 && mx <= 168) && (my >= 600 && my <= 631))
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToLandPage();
			Reset_Level();
		}

		else if (LandPage && (mx >= 1124 && mx <= 1254) && (my >= 579 && my <= 683))
		{
			PlaySound("click.wav", NULL, SND_ASYNC);
			Sleep(350);
			if (musicOn)
			{
				PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			GoToRulesPage();
			Reset_Level();
		}
		printf("x = %d, y= %d\n", mx, my);
	}

	else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
	if (key == 'q' && !mode)
	{
		exit(0);
	}

	if (key == 'm' && !mode)
	{
		if (musicOn)
		{
			musicOn = false;
			PlaySound(0, 0, 0);
		}
		else
		{
			musicOn = true;
			PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	if (gameOver || gameWin)
	{
		if (mode == 1)
		{
			if (key == '\r')
			{
				mode = 0;
				strcpy(str2, str);
				highScore(showScore, str2);
				printf("%s\n", str2);
				for (int i = 0; i < len; i++)
					str[i] = 0;
				len = 0;
			}
			else if (key == '\b')
			{
				len -= 1;
				str[len] = '\0';
			}
			else
			{
				str[len] = key;
				len++;
			}
		}
	}

	// place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

	if (key == GLUT_KEY_HOME)
	{

		GoToLandPage();
	}

	if (key == GLUT_KEY_RIGHT && (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1))
	{

		Puff_x += Move_Puff;
		if (Puff_x >= screenwidth)
		{
			Puff_x -= 30;
		}
		// Collission_Result();
	}

	if (key == GLUT_KEY_LEFT && (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1))
	{

		Puff_x -= Move_Puff;
		if (Puff_x <= 0)
		{
			Puff_x += 30;
		}
		// Collission_Result();
	}
	if (key == GLUT_KEY_UP && (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1))
	{

		Puff_y += Move_Puff;
		if (Puff_y >= screenheight)
		{
			Puff_y -= 30;
		}
		// Collission_Result();
	}

	if (key == GLUT_KEY_DOWN && (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1))
	{

		Puff_y -= Move_Puff;
		if (Puff_y <= 0)
		{
			Puff_y += 30;
		}
		// Collission_Result();
	}

	// place your codes for other keys here
}

void DrawLandPage()
{
	iShowBMP(0, 0, BackGround[0]);
	iShowBMP2(75, 300, Button[0], 255);
	iShowBMP2(1100, 550, Button[1], 255);
	iShowBMP2(1100, 350, Button[2], 255);
	iShowBMP2(1085, 120, Button[3], 255);
	if (musicOn)
	{
		iShowBMP2(50, 100, "mute2.bmp", 0);
	}
	else if (!musicOn)
	{
		iShowBMP2(50, 100, "mute1.bmp", 0);
	}
}
void DrawLevelPage()
{
	int ButtonX = 510, ButtonY = 180, increment = 94;
	iShowBMP(0, 0, Level[0]);
	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			for (int l = 3; l < 5; l++)
			{
				iShowBMP2(ButtonX, ButtonY, Level[l], 0);
				iShowBMP2(ButtonX, ButtonY, particles[part], 0);
				ButtonX += increment + 94;
			}
			ButtonX = 510;
		}
		else
		{
			for (int l = 1; l < 3; l++)
			{
				iShowBMP2(ButtonX, ButtonY, Level[l], 0);
				iShowBMP2(ButtonX, ButtonY, particles[part], 0);
				ButtonX += increment + 94;
			}
		}
		ButtonY += 176;
	}
	iShowBMP(539, 550, Level[7]);
	iShowBMP2(50, 690, BackButtons[0], 0);
}

void DrawCharPage()
{
	iShowBMP(0, 0, "character1.bmp");
	if (hunbunChoose && !nutral)
	{
		iShowBMP(0, 0, "character3.bmp");
	}
	else if (mingChoose && !nutral)
	{
		iShowBMP(0, 0, "character2.bmp");
	}
	else if (daniChoose && !nutral)
	{
		iShowBMP(0, 0, "character4.bmp");
	}
	else if (koyangChoose && !nutral)
	{
		iShowBMP(0, 0, "character5.bmp");
	}
	else if (heinChoose && !nutral)
	{
		iShowBMP(0, 0, "character6.bmp");
	}
	else if (nutral)
	{
		iShowBMP(0, 0, "character1.bmp");
	}
	iShowBMP2(50, 660, "back.bmp", 0);
}

struct highscore
{
	char name[50];
	int fisto = 0;
} scoreVariable[5];

void DrawScorePage()
{
	int y = 600;
	iSetColor(255, 255, 255);
	iFilledRectangle(0, 0, screenwidth, screenheight);
	iShowBMP(0, 0, "highscorepage.bmp");
	FILE *fp = fopen("score1.txt", "r");
	char ireom[5][50], first[5][5];
	for (int i = 0; i < 5; i++)
	{
		fscanf(fp, "%s  %d\n\n", scoreVariable[i].name, &scoreVariable[i].fisto);
	}
	for (int i = 0; i < 5; i++)
	{
		sprintf(ireom[i], "%s", scoreVariable[i].name);
		sprintf(first[i], "%d", scoreVariable[i].fisto);
		iText(530, y - 180, ireom[i], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(800, y - 180, first[i], GLUT_BITMAP_TIMES_ROMAN_24);
		y -= 50;
	}
	fclose(fp);
	iShowBMP2(60, 600, "back4.bmp", 0);
}

void DrawRulesPage()
{
	iShowBMP(0, 0, "rulep.bmp");
	iShowBMP2(60, 600, "back4.bmp", 0);
}

void DrawLevel1()
{
	// iShowBMP(0, 0, "BG//bg.bmp");
	BackgroundRendering();
	iShowBMP2(50, 690, BackButtons[1], 0);
	/*iSetColor(254, 52, 126);
	iFilledRectangle(56, 648, HealthBar, 34);

	iSetColor(255, 240, 230);
	iRectangle(53, 645, 200, 40);
	iRectangle(54, 646, 198, 38);
	iRectangle(55, 647, 196, 36);*/
	DrawHealthBar();

	chooseCharacter();
	// iShowBMP2(Puff_x, Puff_y, HunBun[part], 0);

	AddCoins();
	AddBunny();
	ObsMove();
	Collides_or_Not();
	scoreShow();
}

void DrawLevel2()
{
	// iShowBMP(0, 0, "BG//level2.bmp");
	BackgroundRendering();
	iShowBMP2(50, 690, "quitbutton2.bmp", 0);
	/*iSetColor(186, 184, 108);
	iFilledRectangle(56, 648, HealthBar, 34);

	iSetColor(255, 240, 230);
	iRectangle(53, 645, 200, 40);
	iRectangle(54, 646, 198, 38);
	iRectangle(55, 647, 196, 36);*/
	DrawHealthBar();
	chooseCharacter();
	// iShowBMP2(Puff_x, Puff_y, HunBun[part], 0);
	AddCoins();
	AddBunny();
	ObsMove();
	Collides_or_Not();
	scoreShow();
}

void DrawLevel3()
{

	BackgroundRendering();
	iShowBMP2(50, 690, "quitbutton3.bmp", 0);
	/*iSetColor(254, 230, 29);
	iFilledRectangle(56, 648, HealthBar, 34);

	iSetColor(255, 240, 230);
	iRectangle(53, 645, 200, 40);
	iRectangle(54, 646, 198, 38);
	iRectangle(55, 647, 196, 36);*/
	DrawHealthBar();

	chooseCharacter();
	// iShowBMP2(Puff_x, Puff_y, HunBun[part], 0);
	AddCoins();
	AddBunny();
	ObsMove();
	Collides_or_Not();
	scoreShow();
}

void DrawLevel4()
{
	BackgroundRendering();
	iShowBMP2(50, 690, "quitbutton3.bmp", 0);
	DrawHealthBar();
	chooseCharacter();
	AddCoins();
	AddBunny();
	ObsMove();
	Collides_or_Not();
	scoreShow();
}

void drawGameOver()
{
	iShowBMP(0, 0, gameoverimg[go]);
	sprintf(showIt, "%d", showScore);
	iText(1036, 520, showIt, GLUT_BITMAP_TIMES_ROMAN_24);
	Quit_Page();
	// drawTextBox();
}

void drawWinPage()
{
	iShowBMP(0, 0, gameWinImg[go]);
	iSetColor(0, 0, 0);
	sprintf(showIt, "%d", showScore);
	iText(1050, 515, showIt, GLUT_BITMAP_TIMES_ROMAN_24);
	GoToWinPage();
}

void GoToLandPage()
{
	LandPage = 1;
	LevelPage = 0;
	Charpage = 0;
	Level1 = 0;
	Level2 = 0;
	Level3 = 0;
	Level4 = 0;
	gameWin = 0;
	highScorePage = 0;
	RulesPage = 0;
}

void GoToLevelPage()
{
	LandPage = 0;
	LevelPage = 1;
	Charpage = 0;
	Level1 = 0;
	Level2 = 0;
	Level3 = 0;
	Level4 = 0;
	gameWin = 0;
	highScorePage = 0;
	RulesPage = 0;
}

void GoToCharPage()
{
	LandPage = 0;
	LevelPage = 0;
	Charpage = 1;
	Level1 = 0;
	Level2 = 0;
	Level3 = 0;
	Level4 = 0;
	gameWin = 0;
	highScorePage = 0;
	RulesPage = 0;
}

void GoToLevel1()
{
	LandPage = 0;
	LevelPage = 0;
	Charpage = 0;
	Level1 = 1;
	Level2 = 0;
	Level3 = 0;
	Level4 = 0;
	gameWin = 0;
	highScorePage = 0;
	RulesPage = 0;
}
void GoToLevel2()
{
	LandPage = 0;
	LevelPage = 0;
	Charpage = 0;
	Level1 = 0;
	Level2 = 1;
	Level3 = 0;
	Level4 = 0;
	gameWin = 0;
	highScorePage = 0;
	RulesPage = 0;
}

void GoToLevel3()
{
	LandPage = 0;
	LevelPage = 0;
	Charpage = 0;
	Level1 = 0;
	Level2 = 0;
	Level3 = 1;
	Level4 = 0;
	gameWin = 0;
	highScorePage = 0;
	RulesPage = 0;
}

void GoToLevel4()
{
	LandPage = 0;
	LevelPage = 0;
	Charpage = 0;
	Level1 = 0;
	Level2 = 0;
	Level3 = 0;
	Level4 = 1;
	gameWin = 0;
	highScorePage = 0;
	RulesPage = 0;
}

void Quit_Page()
{
	Level1 = 0;
	Level2 = 0;
	Level3 = 0;
	Level4 = 0;
	Charpage = 0;
	gameOver = 1;
	gameWin = 0;
	Reset_Level();
	highScorePage = 0;
	RulesPage = 0;
}

void GoToWinPage()
{
	Level1 = 0;
	Level2 = 0;
	Level3 = 0;
	Level4 = 0;
	Charpage = 0;
	gameOver = 0;
	gameWin = 1;
	highScorePage = 0;
	RulesPage = 0;
	Reset_Level();
}

void GoToRulesPage()
{
	LandPage = 0;
	LevelPage = 0;
	Charpage = 0;
	Level1 = 0;
	Level2 = 0;
	Level3 = 0;
	Level4 = 0;
	Charpage = 0;
	gameOver = 0;
	gameWin = 0;
	highScorePage = 0;
	RulesPage = 1;
	Reset_Level();
}

void GoToHighSocrePage()
{
	LandPage = 0;
	LevelPage = 0;
	Charpage = 0;
	Level1 = 0;
	Level2 = 0;
	Level3 = 0;
	Level4 = 0;
	highScorePage = 1;
	RulesPage = 0;
}

struct BackGroundPieces
{
	int bg_x;
	int bg_y;
};

BackGroundPieces pieces[23];
void BackgroundRendering()
{
	if (Level1 == 1)
	{
		for (int i = 0; i < 22; i++)
		{
			iShowBMP(pieces[i].bg_x, 0, Level1BackGround[i]);
			if (pieces[i].bg_x <= 0)
			{
				pieces[i].bg_x = screenwidth - 62;
			}
		}
	}
	else if (Level2 == 1)
	{
		for (int i = 0; i < 22; i++)
		{
			iShowBMP(pieces[i].bg_x, 0, Level2BackGround[i]);
			if (pieces[i].bg_x <= 0)
			{
				pieces[i].bg_x = screenwidth - 62;
			}
		}
	}
	else if (Level3 == 1)
	{
		for (int i = 0; i < 22; i++)
		{
			iShowBMP(pieces[i].bg_x, 0, Level3BackGround[i]);
			if (pieces[i].bg_x <= 0)
			{
				pieces[i].bg_x = screenwidth - 62;
			}
		}
	}
	else if (Level4 == 1)
	{
		for (int i = 0; i < 22; i++)
		{
			iShowBMP(pieces[i].bg_x, 0, Level4BackGround[i]);
			if (pieces[i].bg_x <= 0)
			{
				pieces[i].bg_x = screenwidth - 62;
			}
		}
	}
}
void BackGroundVariables()
{
	for (int i = 0, j = 0; i < 22; i++)
	{

		pieces[i].bg_x = (j);
		j += 62;
	}
}

/*#define ObsNum 20
// bool ObsThere = true;
struct obstacles
{
	int Obs_X;
	int Obs_Y;
	int Bunny_x;
	int Bunny_y;
	bool ObsThere = true;
};
obstacles Bars[ObsNum];
void ObsMove()
{
	for (int i = 0; i < ObsNum; i++)
	{

		if (Bars[i].ObsThere && Level1 == 1)
		{
			iShowBMP2(Bars[i].Obs_X, Bars[i].Obs_Y, "BG\\MojoObs.bmp", 0);

			if (i == ObsNum - 1 && Bars[ObsNum - 1].Obs_X + 500 <= 0)
			{
				ObsThere = false;
			}
		}
	}
}
void ObsVariables()
{
	for (int i = 0; i < ObsNum; i++)
	{
		Bars[i].Obs_X = screenwidth + 500 * i - rand() % 100;
		Bars[i].Obs_Y = 100 + rand() % 300;
		obstacles_speed = 10;
		Bars[i].ObsThere = true;
	}
}

obstacles Bunny[ObsNum];
void AddBunny()
{
	for (int i = 0; i < ObsNum; i++)
	{
		iShowBMP2(Bunny[i].Bunny_x, Bunny[i].Bunny_y, Bunnies[part], 0);
	}
}

void BunnyVariables()
{
	for (int i = 0; i < ObsNum; i++)
	{
		Bunny[i].Bunny_x = Bars[i].Obs_X + 65;
		Bunny[i].Bunny_y = Bars[i].Obs_Y + 85;
	}
}

struct CoinsAdd
{
	int coin_x;
	int coin_y;
	bool CoinShow = true;
};

CoinsAdd Coins[coinNum];

void AddCoins()
{
	for (int i = 0; i < coinNum; i++)
	{
		if (Coins[i].CoinShow)
		{
			iShowBMP2(Coins[i].coin_x, Coins[i].coin_y, "coins.bmp", 0);
		}
		for (int j = 0; j < ObsNum; j++)
		{
			if (Coins[i].coin_x + 40 >= Bars[j].Obs_X && Coins[i].coin_x <= Bars[j].Obs_X + 164 && Coins[i].coin_x + 38 >= Bars[j].Obs_X && Coins[i].coin_y <= Bars[j].Obs_Y + 76)
			{
				Coins[i].coin_y += 100;
			}
		}
	}
}
void coinVariables()
{
	for (int i = 0; i < coinNum; i++)
	{
		Coins[i].coin_x = screenwidth + 200 * i;
		Coins[i].coin_y = 300 + rand() % 150;
	}
}*/

void Reset_Level()
{
	Puff_x = 50;
	Puff_y = 100;
	score = 0;
	bunSave = 0;
	count = 0;
	HealthBar = 195;
	ObsVariables();
	BunnyVariables();
	coinVariables();
}

void change()
{
	part = (part + 1) % 3;
	light = (light + 1) % 16;
	if (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1)
	{
		for (int i = 0; i < ObsNum; i++)
		{
			Bars[i].Obs_X -= obstacles_speed; //+ rand()%20;
		}
		for (int i = 0; i < 22; i++)
		{
			pieces[i].bg_x -= 2;
		}
		for (int i = 0; i < ObsNum; i++)
		{
			if (Bars[i].ObsThere)
			{
				Bunny[i].Bunny_x -= obstacles_speed;
			}
			else
			{
				Bunny[i].Bunny_x -= obstacles_speed;
				Bunny[i].Bunny_y -= 25;
			}
		}
		for (int i = 0; i < coinNum; i++)
		{
			Coins[i].coin_x -= obstacles_speed;
		}
	}
	/*else if (Level2 == 1)
	{
		for (int i = 0; i < 22; i++)
		{
			pieces[i].bg_x -= 2;
		}
	}*/
	Puff_x -= 1;
}

void change2()
{
	coin = (coin + 1) % 7;
}

void change3()
{

	go = (go + 1) % 2;
}

/*if (Health_Decrease == true && count < 200)
{
	HealthBar -= 0.1;
}
}
void change2()
{
if (Health_Decrease == true && count < 200 && HealthBar >= 0)
{
	HealthBar -= .5;
}
}*/

void Collides_or_Not()
{
	int count2 = 0;
	Health_Decrease = false;

	for (int i = 0; i < ObsNum; i++)
	{
		if (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1)
		{
			// if (((Puff_x + 220 > Bars[i].Obs_X) && (Puff_x < Bars[i].Obs_X + 164)) && ((Puff_y + 117 >= Bars[i].Obs_Y) && (Puff_y <= Bars[i].Obs_Y + 76)))
			if (((Puff_x + 210 > Bars[i].Obs_X) && (Puff_x + 100 < Bars[i].Obs_X + 164)) && ((Puff_y + 105 >= Bars[i].Obs_Y) && (Puff_y + 20 <= Bars[i].Obs_Y + 76)))
			{
				Bars[i].ObsThere = false;
				Health_Decrease = true;
				// HealthBar -= 0.5;
			}
			if (Bars[i].ObsThere == false)
			{
				if (count2 < 2)
				{
					count2 = count2 + 1;
				}
				else if ((count2 == 2 && (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1) && Health_Decrease)) //|| Bars[ObsNum-1].Obs_X <= 0 )
				{
					showScore = score;
					drawGameOver();
					break;
				}
			}
		}
		heartInd = count2;
	}
}

void coinCollection()
{
	if (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1)
	{
		for (int i = 0; i < coinNum; i++)
		{
			if (((Puff_x + 210 > Coins[i].coin_x + 10) && (Puff_x + 90 < Coins[i].coin_x + 40)) && ((Puff_y + 108 >= Coins[i].coin_y + 2) && (Puff_y + 15 <= Coins[i].coin_y + 42)))
			{
				Coins[i].CoinShow = false;
				count = 0;
				for (int i = 0; i < coinNum; i++)
				{
					if (!Coins[i].CoinShow)
					{
						count = count + 1;
					}
				}
				// score = count;
			}
		}
		for (int i = 0; i < ObsNum; i++)
		{
			if (((Puff_x + 210 > Bunny[i].Bunny_x + 10) && (Puff_x + 90 < Bunny[i].Bunny_x + 40)) && ((Puff_y + 108 >= Bunny[i].Bunny_y + 4) && (Puff_y + 15 <= Bunny[i].Bunny_y + 42)))
			{
				Bunny[i].BunnyThere = false;
				bunSave = 0;
				for (int i = 0; i < ObsNum; i++)
				{
					if (!Bunny[i].BunnyThere)
					{
						bunSave = bunSave + 1;
					}
				}
				// score = score + bunSave*5;
			}
		}
		score = count + bunSave * 5;
	}
}

char bunnysv[100];

void scoreShow()
{
	if (Level1 == 1 || Level2 == 1 || Level3 == 1 || Level4 == 1)
	{
		iSetColor(0, 0, 0);
		iText(59, 614, "SCORE:", GLUT_BITMAP_HELVETICA_18);
		sprintf(SCORE, "%d", score);
		sprintf(bunnysv, "%d", bunSave);
		iText(126, 615, SCORE, GLUT_BITMAP_HELVETICA_18);
		iShowBMP2(65, 540, "bun_1.bmp", 0);
		iText(126, 560, bunnysv, GLUT_BITMAP_HELVETICA_18);
		iRectangle(52, 600, 200, 40);
		iRectangle(53, 601, 198, 38);
		iRectangle(54, 602, 196, 36);
	}
}

void highScore(int showscore, char str3[100])
{

	FILE *fp = fopen("score1.txt", "r");
	for (int i = 0; i < 5; i++)
	{
		fscanf(fp, "%s  %d\n\n", scoreVariable[i].name, &scoreVariable[i].fisto);
	}
	fclose(fp);

	if (scoreVariable[0].fisto <= showscore)
	{
		for (int j = 4; j >= 1; j--)
		{
			scoreVariable[j].fisto = scoreVariable[j - 1].fisto;
			strcpy(scoreVariable[j].name, scoreVariable[j - 1].name);
		}
		scoreVariable[0].fisto = showscore;
		strcpy(scoreVariable[0].name, str3);
	}
	for (int i = 0; i < 5 && i + 1 < 5; i++)
	{
		if (scoreVariable[i].fisto > showscore && scoreVariable[i + 1].fisto < showscore)
		{
			for (int j = 4; j >= i + 1; j--)
			{
				scoreVariable[j].fisto = scoreVariable[j - 1].fisto;
				strcpy(scoreVariable[j].name, scoreVariable[j - 1].name);
			}
			scoreVariable[i + 1].fisto = showscore;
			strcpy(scoreVariable[i + 1].name, str3);
			break;
		}
	}

	fp = fopen("score1.txt", "w");
	for (int i = 0; i < 5; i++)
	{
		fprintf(fp, "%s  %d\n\n", scoreVariable[i].name, scoreVariable[i].fisto);
	}
	fclose(fp);
}

void showVillain()
{
	vil = (vil + 1) % 2;
}
/*char ch;
void getName()
{
	while(!(ch == '\n'))
	{
		scanf("%c", &ch);
	}
	sprintf(NAME, "%d", ch);
	iText(126, 615, NAME, GLUT_BITMAP_HELVETICA_18);
}*/

/*void Collission_Result()
{
	Collides_or_Not();
	if(Health_Decrease)
	{

		HealthBar -= 65;
	}
	else if(HealthBar <= 0)
	{
		GoToLevelPage();
	}


}
*/

int main()
{
	// place your own initialization codes here.
	len = 0;
	mode = 0;
	str[0] = 0;
	if (musicOn)
	{
		PlaySound("NewJeans.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	iSetTimer(50, change);
	iSetTimer(0, coinCollection);
	iSetTimer(500, showVillain);
	iSetTimer(0, change2);
	iSetTimer(750, change3);
	coinVariables();
	BunnyVariables();
	BackGroundVariables();
	ObsVariables();
	DrawLandPage();
	iInitialize(screenwidth, screenheight, "The Great Y2K Bunny Odessey");
	return 0;
}
