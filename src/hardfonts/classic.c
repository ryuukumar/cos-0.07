#include <stddef.h>
#include <stdint.h>

static unsigned char __classic_font__ [96][8][5] = {
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0}
	},
	{
		{0,1,0,1,0},
		{0,1,0,1,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,1,0,1,0},
		{0,1,0,1,0},
		{1,1,1,1,1},
		{0,1,0,1,0},
		{0,1,0,1,0},
		{1,1,1,1,1},
		{0,1,0,1,0},
		{0,1,0,1,0}
	},
	{
		{0,0,1,0,0},
		{0,1,1,1,1},
		{1,0,1,0,0},
		{1,0,1,0,0},
		{0,1,1,1,0},
		{0,0,1,0,1},
		{0,0,1,0,1},
		{1,1,1,1,0}
	},
	{
		{1,1,0,0,1},
		{1,1,0,1,0},
		{0,0,0,1,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,1,0,0,0},
		{0,1,0,1,1},
		{1,0,0,1,1}
	},
	{ //&
		{0,0,1,0,0},
		{0,1,0,1,0},
		{0,1,0,1,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,1,0,1,1},
		{1,0,0,1,0},
		{1,1,1,0,1}
	},
	{
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,1,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,0,1,0,0}
	},
	{
		{0,0,1,0,0},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,1,0,0}
	},
	{
		{0,1,0,1,0},
		{0,0,1,0,0},
		{0,1,0,1,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{1,1,1,1,1},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,0,0,0},
		{1,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,0,0,0},
		{0,0,0,0,0}
	},
	{ // /
		{0,0,0,0,1},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{1,0,0,0,0}
	},
	{
		{0,0,1,0,0},
		{0,1,0,1,0},
		{1,0,0,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,0,0,0,1},
		{0,1,0,1,0},
		{0,0,1,0,0}
	},
	{
		{0,0,1,0,0},
		{0,1,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0}
	},
	{
		{0,0,1,0,0},
		{0,1,0,1,0},
		{1,0,0,0,1},
		{0,0,0,1,0},
		{0,0,1,0,0},
		{0,1,0,0,0},
		{1,0,0,0,0},
		{1,1,1,1,1}
	},
	{
		{0,1,1,1,0},
		{1,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,1,0},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{0,1,0,0,1},
		{0,1,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1}
	},
	{ // 5
		{0,1,1,1,1},
		{1,0,0,0,0},
		{1,0,1,1,0},
		{1,1,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{0,0,1,1,0},
		{0,1,0,0,1},
		{1,0,0,0,0},
		{1,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{1,1,1,1,1},
		{0,0,0,0,1},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,1,0,0,0},
		{1,0,0,0,0}
	},
	{
		{0,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{0,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,1},
		{0,0,1,1,0},
		{1,1,0,0,0},
		{0,0,1,1,0},
		{0,0,0,0,1},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,0,0,0,0},
		{0,1,1,0,0},
		{0,0,0,1,1},
		{0,1,1,0,0},
		{1,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,1,0,0},
		{0,1,0,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,0,0,1,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0}
	},
	{
		{0,0,0,0,0},
		{1,1,1,1,1},
		{1,0,0,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,0,1,1,1},
		{1,0,0,0,0},
		{1,1,1,1,1}
	},
	{
		{0,0,1,0,0},
		{0,1,0,1,0},
		{0,1,0,1,0},
		{0,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1}
	},
	{
		{1,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,0}
	},
	{
		{0,1,1,1,1},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{0,1,1,1,1}
	},
	{
		{1,1,1,0,0},
		{1,0,0,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,1,0},
		{1,1,1,0,0}
	},
	{
		{1,1,1,1,1},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,1,1,1,1},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,1,1,1,1}
	},
	{
		{1,1,1,1,1},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,1,1,1,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0}
	},
	{
		{0,1,1,1,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,1,1,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1}
	},
	{
		{0,1,1,1,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,1,1,1,0}
	},
	{
		{1,1,1,1,0},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{1,0,0,1,0},
		{0,1,1,0,0}
	},
	{
		{1,0,0,0,1},
		{1,0,0,1,0},
		{1,0,1,0,0},
		{1,1,0,0,0},
		{1,1,1,0,0},
		{1,0,0,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1}
	},
	{
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,1,1,1,1}
	},
	{
		{1,1,0,1,1},
		{1,1,0,1,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1}
	},
	{
		{1,0,0,0,1},
		{1,1,0,0,1},
		{1,1,0,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,0,0,1,1},
		{1,0,0,1,1},
		{1,0,0,0,1}
	},
	{
		{0,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{1,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0}
	},
	{
		{0,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,1,0,1},
		{1,0,0,1,1},
		{0,1,1,1,1}
	},
	{
		{1,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,0},
		{1,1,0,0,0},
		{1,0,1,0,0},
		{1,0,0,1,0},
		{1,0,0,0,1}
	},
	{
		{0,1,1,1,1},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{0,1,1,1,0},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{1,1,1,1,0}
	},
	{
		{1,1,1,1,1},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0}
	},
	{
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{1,0,0,0,1},
		{1,0,0,0,0},
		{1,0,0,0,1},
		{0,1,0,1,0},
		{0,1,0,1,0},
		{0,1,0,1,0},
		{0,0,1,0,0},
		{0,0,1,0,0}
	},
	{
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{0,1,0,1,0},
		{0,1,0,1,0}
	},
	{
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,0,1,0},
		{0,0,1,0,0},
		{0,1,0,1,0},
		{0,1,0,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1}
	},
	{
		{1,0,0,0,1},
		{0,1,0,1,0},
		{0,1,0,1,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0}
	},
	{ // Z
		{1,1,1,1,1},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,1,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{1,0,0,0,0},
		{1,1,1,1,1}
	},
	{
		{1,1,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,1,0,0,0}
	},
	{
		{1,0,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,0,0,1}
	},
	{
		{0,0,0,1,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,1,1}
	},
	{
		{0,0,1,0,0},
		{0,1,0,1,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,1,1,1,1}
	},
	{
		{1,0,0,0,0},
		{0,1,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{1,0,0,0,1},
		{0,1,1,1,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,1}
	},
	{
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,1},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{0,1,1,1,1}
	},
	{
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,1},
		{0,1,1,1,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,1}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{1,0,0,0,1},
		{1,1,1,1,0},
		{1,0,0,0,0},
		{0,1,1,1,1}
	},
	{
		{0,0,1,1,0},
		{0,1,0,0,1},
		{0,1,0,0,0},
		{1,1,1,1,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{1,0,0,0,1},
		{0,1,1,1,1},
		{0,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,1,1,0},
		{1,1,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{1,0,1,0,0},
		{0,1,1,0,0}
	},
	{
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,1},
		{1,0,1,1,0},
		{1,1,0,0,0},
		{1,0,1,1,0},
		{1,0,0,0,1}
	},
	{
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,1,0,0},
		{0,1,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,1,0,1,0},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,0,1,1,0},
		{1,1,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,1,1,1,0},
		{1,0,0,0,1},
		{1,1,1,1,0},
		{1,0,0,0,0},
		{1,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{1,0,0,1,0},
		{0,1,1,1,0},
		{0,0,0,1,1},
		{0,0,0,1,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,0,1,1,0},
		{1,1,0,0,1},
		{1,0,0,0,0},
		{1,0,0,0,0},
		{1,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{1,0,0,0,0},
		{0,1,1,1,0},
		{0,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{1,1,1,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,1,0},
		{0,0,1,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,1}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,0,1,0},
		{0,1,0,1,0},
		{0,0,1,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,0,0,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{0,1,0,1,0},
		{0,1,0,1,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,0,0,0,1},
		{0,1,0,1,0},
		{0,0,1,0,0},
		{0,1,0,1,0},
		{1,0,0,0,1}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{0,1,1,1,1},
		{0,0,0,0,1},
		{0,1,1,1,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{1,1,1,1,1},
		{0,0,0,1,0},
		{0,0,1,0,0},
		{0,1,0,0,0},
		{1,1,1,1,1}
	},
	{
		{0,0,1,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{1,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,1,0,0,0},
		{0,0,1,0,0}
	},
	{
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0}
	},
	{
		{0,0,1,0,0},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,0,1,1},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,0,1,0},
		{0,0,1,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,0,0,0},
		{1,0,1,0,1},
		{0,0,0,1,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	},
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	}
};

unsigned char* glyph(char index) {
	if (index < 32) return __classic_font__[0];
	return __classic_font__[index-32];
}