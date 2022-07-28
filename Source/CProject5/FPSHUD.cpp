// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSHUD.h"

void AFPSHUD::DrawHUD()
{
	Super::DrawHUD();

	if (CrosshairTexture)
	{
		//�ҳ����ǵĻ��������ĵ�
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

		//ƫ�������С��һ�룬�Ա����������뻭�����Ķ���
		FVector2D CrossHairDrawPosittion(Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5f),Center.Y-(CrosshairTexture->GetSurfaceHeight()*0.5f));
		//FVector2D CrossHairDrawPosittion(Center.X, Center.Y );


		//�����ĵ����ʮ��׼��
		FCanvasTileItem TileItem(CrossHairDrawPosittion, CrosshairTexture->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);


	}
}

