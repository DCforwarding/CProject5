// Fill out your copyright notice in the Description page of Project Settings.


#include "FBS_GameModeBase.h"

void AFBS_GameModeBase::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);

	//��ʾ������Ϣ5�롣
	//�����е�-1 ������ֵ���Ͳ����ܷ�ֹ˵��Ϣ�����»�ˢ�¡�
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World,this is FPSGameMode!"));
}