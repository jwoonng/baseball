#include "baseball.cpp"
#include "gmock/gmock.h"
#include "baseball_test.h"

class BaseballFixture : public testing::Test {
public:
	Baseball game;
	void assertIllegalArgument(string guessNumber) {
		Baseball game;
		try {
			game.guess(string(guessNumber));
			FAIL();
		}
		catch (exception e) {
			//EXPECT_THROW(game.guess(string("12s")), invalid_argument);
		}
	}
};

TEST_F(BaseballFixture, ThrowExceptionWhenInvalidCase) {
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
	assertIllegalArgument("121");

}