#pragma once

#include "Card.h"
class CardTwelve : public Card
{
	static bool loaded;
	static bool saved;

	friend NewGameAction;
	static int CardPrice;
	static int Fees;
	static int Check;
	static Player* Owner;

public:
	CardTwelve(const CellPosition& pos);

	virtual void ReadCardParameters(Grid* pGrid);

	virtual void Apply(Grid* pGrid, Player* pPlayer);

	void Save(ofstream& Outfile, int Type);
	void Load(ifstream& Infile);

	virtual ~CardTwelve();

	 void editsetup();
	static void loadsetup();
	static void savesetup();
};
