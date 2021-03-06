#pragma once
#include "../SCENEMANAGER/BaseScreen.h"
#include "../../C_UI/CUI.h"

class C_RESULT : public BaseScene
{
public:

	C_RESULT() {};
	virtual ~C_RESULT() {};

	virtual void Initialize()  override;
	virtual void Update()      override;
	virtual void Draw3D()      override { return; };
	virtual void Draw2D()      override;
	virtual void DrawAlpha3D() override { return; };

private:
	SPRITE sprite;
	SPRITE result;
	SPRITE _1st, _2nd, _3rd;
	FONT font;

	void Add_Sprite(LPCTSTR _sprite_name);
	std::vector<SPRITE> sprite_list_name;

	int ranking_score[3];
	CUI cui;
};