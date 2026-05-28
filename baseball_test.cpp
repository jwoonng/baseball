#include "baseball.cpp"
#include "gmock/gmock.h"
#include "baseball_test.h"


TEST(baseballGame, ThrowExceptionWhenInputLengthIsUnmached) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12")), length_error);
}