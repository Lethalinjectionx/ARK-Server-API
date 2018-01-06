// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "../BasicTypes.h"
#include "../Containers/FString.h"
#include "../Containers/Map.h"
#include "Color.h"

class FColorList
{
public:
	typedef TMap< FString, const FColor* > TColorsMap;
	typedef TArray< const FColor* > TColorsLookup;

	// Common colors.	
	static const FColor White;
	static const FColor Red;
	static const FColor Green;
	static const FColor Blue;
	static const FColor Magenta;
	static const FColor Cyan;
	static const FColor Yellow;
	static const FColor Black;
	static const FColor Aquamarine;
	static const FColor BakerChocolate;
	static const FColor BlueViolet;
	static const FColor Brass;
	static const FColor BrightGold;
	static const FColor Brown;
	static const FColor Bronze;
	static const FColor BronzeII;
	static const FColor CadetBlue;
	static const FColor CoolCopper;
	static const FColor Copper;
	static const FColor Coral;
	static const FColor CornFlowerBlue;
	static const FColor DarkBrown;
	static const FColor DarkGreen;
	static const FColor DarkGreenCopper;
	static const FColor DarkOliveGreen;
	static const FColor DarkOrchid;
	static const FColor DarkPurple;
	static const FColor DarkSlateBlue;
	static const FColor DarkSlateGrey;
	static const FColor DarkTan;
	static const FColor DarkTurquoise;
	static const FColor DarkWood;
	static const FColor DimGrey;
	static const FColor DustyRose;
	static const FColor Feldspar;
	static const FColor Firebrick;
	static const FColor ForestGreen;
	static const FColor Gold;
	static const FColor Goldenrod;
	static const FColor Grey;
	static const FColor GreenCopper;
	static const FColor GreenYellow;
	static const FColor HunterGreen;
	static const FColor IndianRed;
	static const FColor Khaki;
	static const FColor LightBlue;
	static const FColor LightGrey;
	static const FColor LightSteelBlue;
	static const FColor LightWood;
	static const FColor LimeGreen;
	static const FColor MandarianOrange;
	static const FColor Maroon;
	static const FColor MediumAquamarine;
	static const FColor MediumBlue;
	static const FColor MediumForestGreen;
	static const FColor MediumGoldenrod;
	static const FColor MediumOrchid;
	static const FColor MediumSeaGreen;
	static const FColor MediumSlateBlue;
	static const FColor MediumSpringGreen;
	static const FColor MediumTurquoise;
	static const FColor MediumVioletRed;
	static const FColor MediumWood;
	static const FColor MidnightBlue;
	static const FColor NavyBlue;
	static const FColor NeonBlue;
	static const FColor NeonPink;
	static const FColor NewMidnightBlue;
	static const FColor NewTan;
	static const FColor OldGold;
	static const FColor Orange;
	static const FColor OrangeRed;
	static const FColor Orchid;
	static const FColor PaleGreen;
	static const FColor Pink;
	static const FColor Plum;
	static const FColor Quartz;
	static const FColor RichBlue;
	static const FColor Salmon;
	static const FColor Scarlet;
	static const FColor SeaGreen;
	static const FColor SemiSweetChocolate;
	static const FColor Sienna;
	static const FColor Silver;
	static const FColor SkyBlue;
	static const FColor SlateBlue;
	static const FColor SpicyPink;
	static const FColor SpringGreen;
	static const FColor SteelBlue;
	static const FColor SummerSky;
	static const FColor Tan;
	static const FColor Thistle;
	static const FColor Turquoise;
	static const FColor VeryDarkBrown;
	static const FColor VeryLightGrey;
	static const FColor Violet;
	static const FColor VioletRed;
	static const FColor Wheat;
	static const FColor YellowGreen;
};

// Common colors declarations.
const FColor FColorList::White(255, 255, 255, 255);
const FColor FColorList::Red(255, 0, 0, 255);
const FColor FColorList::Green(0, 255, 0, 255);
const FColor FColorList::Blue(0, 0, 255, 255);
const FColor FColorList::Magenta(255, 0, 255, 255);
const FColor FColorList::Cyan(0, 255, 255, 255);
const FColor FColorList::Yellow(255, 255, 0, 255);
const FColor FColorList::Black(0, 0, 0, 255);
const FColor FColorList::Aquamarine(112, 219, 147, 255);
const FColor FColorList::BakerChocolate(92, 51, 23, 255);
const FColor FColorList::BlueViolet(159, 95, 159, 255);
const FColor FColorList::Brass(181, 166, 66, 255);
const FColor FColorList::BrightGold(217, 217, 25, 255);
const FColor FColorList::Brown(166, 42, 42, 255);
const FColor FColorList::Bronze(140, 120, 83, 255);
const FColor FColorList::BronzeII(166, 125, 61, 255);
const FColor FColorList::CadetBlue(95, 159, 159, 255);
const FColor FColorList::CoolCopper(217, 135, 25, 255);
const FColor FColorList::Copper(184, 115, 51, 255);
const FColor FColorList::Coral(255, 127, 0, 255);
const FColor FColorList::CornFlowerBlue(66, 66, 111, 255);
const FColor FColorList::DarkBrown(92, 64, 51, 255);
const FColor FColorList::DarkGreen(47, 79, 47, 255);
const FColor FColorList::DarkGreenCopper(74, 118, 110, 255);
const FColor FColorList::DarkOliveGreen(79, 79, 47, 255);
const FColor FColorList::DarkOrchid(153, 50, 205, 255);
const FColor FColorList::DarkPurple(135, 31, 120, 255);
const FColor FColorList::DarkSlateBlue(107, 35, 142, 255);
const FColor FColorList::DarkSlateGrey(47, 79, 79, 255);
const FColor FColorList::DarkTan(151, 105, 79, 255);
const FColor FColorList::DarkTurquoise(112, 147, 219, 255);
const FColor FColorList::DarkWood(133, 94, 66, 255);
const FColor FColorList::DimGrey(84, 84, 84, 255);
const FColor FColorList::DustyRose(133, 99, 99, 255);
const FColor FColorList::Feldspar(209, 146, 117, 255);
const FColor FColorList::Firebrick(142, 35, 35, 255);
const FColor FColorList::ForestGreen(35, 142, 35, 255);
const FColor FColorList::Gold(205, 127, 50, 255);
const FColor FColorList::Goldenrod(219, 219, 112, 255);
const FColor FColorList::Grey(192, 192, 192, 255);
const FColor FColorList::GreenCopper(82, 127, 118, 255);
const FColor FColorList::GreenYellow(147, 219, 112, 255);
const FColor FColorList::HunterGreen(33, 94, 33, 255);
const FColor FColorList::IndianRed(78, 47, 47, 255);
const FColor FColorList::Khaki(159, 159, 95, 255);
const FColor FColorList::LightBlue(192, 217, 217, 255);
const FColor FColorList::LightGrey(168, 168, 168, 255);
const FColor FColorList::LightSteelBlue(143, 143, 189, 255);
const FColor FColorList::LightWood(233, 194, 166, 255);
const FColor FColorList::LimeGreen(50, 205, 50, 255);
const FColor FColorList::MandarianOrange(228, 120, 51, 255);
const FColor FColorList::Maroon(142, 35, 107, 255);
const FColor FColorList::MediumAquamarine(50, 205, 153, 255);
const FColor FColorList::MediumBlue(50, 50, 205, 255);
const FColor FColorList::MediumForestGreen(107, 142, 35, 255);
const FColor FColorList::MediumGoldenrod(234, 234, 174, 255);
const FColor FColorList::MediumOrchid(147, 112, 219, 255);
const FColor FColorList::MediumSeaGreen(66, 111, 66, 255);
const FColor FColorList::MediumSlateBlue(127, 0, 255, 255);
const FColor FColorList::MediumSpringGreen(127, 255, 0, 255);
const FColor FColorList::MediumTurquoise(112, 219, 219, 255);
const FColor FColorList::MediumVioletRed(219, 112, 147, 255);
const FColor FColorList::MediumWood(166, 128, 100, 255);
const FColor FColorList::MidnightBlue(47, 47, 79, 255);
const FColor FColorList::NavyBlue(35, 35, 142, 255);
const FColor FColorList::NeonBlue(77, 77, 255, 255);
const FColor FColorList::NeonPink(255, 110, 199, 255);
const FColor FColorList::NewMidnightBlue(0, 0, 156, 255);
const FColor FColorList::NewTan(235, 199, 158, 255);
const FColor FColorList::OldGold(207, 181, 59, 255);
const FColor FColorList::Orange(255, 127, 0, 255);
const FColor FColorList::OrangeRed(255, 36, 0, 255);
const FColor FColorList::Orchid(219, 112, 219, 255);
const FColor FColorList::PaleGreen(143, 188, 143, 255);
const FColor FColorList::Pink(188, 143, 143, 255);
const FColor FColorList::Plum(234, 173, 234, 255);
const FColor FColorList::Quartz(217, 217, 243, 255);
const FColor FColorList::RichBlue(89, 89, 171, 255);
const FColor FColorList::Salmon(111, 66, 66, 255);
const FColor FColorList::Scarlet(140, 23, 23, 255);
const FColor FColorList::SeaGreen(35, 142, 104, 255);
const FColor FColorList::SemiSweetChocolate(107, 66, 38, 255);
const FColor FColorList::Sienna(142, 107, 35, 255);
const FColor FColorList::Silver(230, 232, 250, 255);
const FColor FColorList::SkyBlue(50, 153, 204, 255);
const FColor FColorList::SlateBlue(0, 127, 255, 255);
const FColor FColorList::SpicyPink(255, 28, 174, 255);
const FColor FColorList::SpringGreen(0, 255, 127, 255);
const FColor FColorList::SteelBlue(35, 107, 142, 255);
const FColor FColorList::SummerSky(56, 176, 222, 255);
const FColor FColorList::Tan(219, 147, 112, 255);
const FColor FColorList::Thistle(216, 191, 216, 255);
const FColor FColorList::Turquoise(173, 234, 234, 255);
const FColor FColorList::VeryDarkBrown(92, 64, 51, 255);
const FColor FColorList::VeryLightGrey(205, 205, 205, 255);
const FColor FColorList::Violet(79, 47, 79, 255);
const FColor FColorList::VioletRed(204, 50, 153, 255);
const FColor FColorList::Wheat(216, 216, 191, 255);
const FColor FColorList::YellowGreen(153, 204, 50, 255);