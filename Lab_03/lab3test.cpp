#include <igloo/igloo.h>
#include "lab3.h"

using namespace igloo;

Context(RegroupTest){
	Spec(LettersOnly){
		Assert::That(regroup("HELLO"), Equals("HELLO"));
	}
	Spec(NumbersOnly){
		Assert::That(regroup("1234"), Equals("1234"));
	}
	Spec(LettersFirstGrouped){
		Assert::That(regroup("FIFA2020"), Equals("FIFA2020"));
	}
	Spec(NumbersFirstGrouped){
		Assert::That(regroup("3WEEKS"), Equals("WEEKS3"));
	}
	Spec(Alternating){
		Assert::That(regroup("A1B2C3"), Equals("ABC123"));
	}
};

Context(CountUpperCaseTest){
	Spec(NoUpperCaseLetters){
		Assert::That(count_upper("hello"), Equals(0));
	}
	Spec(AllUpperCaseThreeLetters){
		Assert::That(count_upper("ABC"), Equals(3));
	}
	Spec(AllUpperCaseSevenLetters){
		Assert::That(count_upper("ABCDEFG"), Equals(7));
	}
	Spec(FirstLetterOnly){
		Assert::That(count_upper("Hello"), Equals(1));
	}
	Spec(LastLetterOnly){
		Assert::That(count_upper("hellO"), Equals(1));
	}
	Spec(AlternatingCasesFive){
		Assert::That(count_upper("AaBbCcDdEe"), Equals(5));
	}
	Spec(AlternatingCasesEight){
		Assert::That(count_upper("AaBbCcDdEeFfGgHh"), Equals(8));
	}
};

Context(InvertStringTest){
	Spec(HelloWorldExample){
		Assert::That(transform_case("Hello World"), Equals("hELLO wORLD"));
	}
	Spec(AlphabetExample){
		Assert::That(transform_case("Alphabet"), Equals("ALPHaBET"));
	}
	Spec(EarthExample){
		Assert::That(transform_case("Earth"), Equals("EaRTH"));
	}
	Spec(AlphabetAllLower){
		Assert::That(transform_case("alphabet"), Equals("aLPHaBET"));
	}
	Spec(AlphabetAllLowerWithUpperE){
		Assert::That(transform_case("alphabEt"), Equals("aLPHaBET"));
	}
	Spec(AllLowerWorld){
		Assert::That(transform_case("world"), Equals("WORLD"));
	}
	Spec(AllUpperWorld){
		Assert::That(transform_case("WORLD"), Equals("world"));
	}
};

Context(StringRotationTest){
	Spec(SameStrings){
		Assert::That(rotation_distance("ABCD", "ABCD"), Equals(0));
	}
	Spec(RotateRightOne){
		Assert::That(rotation_distance("ABCD", "DABC"), Equals(1));
	}
	Spec(RotateLeftOne){
		Assert::That(rotation_distance("ABCD", "BCDA"), Equals(1));
	}
	Spec(RotateLeftMulti){
		Assert::That(rotation_distance("ABCDEFG", "DEFGABC"), Equals(3));
	}
	Spec(RotateRightMulti){
		Assert::That(rotation_distance("ABCDEFG", "EFGABCD"), Equals(3));
	}
	Spec(NotRotatable){
		Assert::That(rotation_distance("ABCD", "BCAD"), Equals(-1));
	}
};

Context(StringCompressionTest){
	Spec(AlphabetA){
		Assert::That(symmetric("A"), IsTrue());
	}
	Spec(AlphabetB){
		Assert::That(symmetric("B"), IsFalse());
	}
	Spec(AlphabetC){	
		Assert::That(symmetric("C"), IsFalse());
	}
	Spec(AlphabetD){	
		Assert::That(symmetric("D"), IsFalse());
	}
	Spec(AlphabetE){	
		Assert::That(symmetric("E"), IsFalse());
	}
	Spec(AlphabetF){		
		Assert::That(symmetric("F"), IsFalse());
	}
	Spec(AlphabetG){		
		Assert::That(symmetric("G"), IsFalse());
	}
	Spec(AlphabetH){		
		Assert::That(symmetric("H"), IsTrue());
	}
	Spec(AlphabetI){		
		Assert::That(symmetric("I"), IsTrue());
	}
	Spec(AlphabetJ){		
		Assert::That(symmetric("J"), IsFalse());
	}
	Spec(AlphabetK){		
		Assert::That(symmetric("K"), IsFalse());
	}
	Spec(AlphabetL){		
		Assert::That(symmetric("L"), IsFalse());
	}
	Spec(AlphabetM){		
		Assert::That(symmetric("M"), IsTrue());
	}
	Spec(AlphabetN){		
		Assert::That(symmetric("N"), IsFalse());
	}
	Spec(AlphabetO){		
		Assert::That(symmetric("O"), IsTrue());
	}
	Spec(AlphabetP){		
		Assert::That(symmetric("P"), IsFalse());
	}
	Spec(AlphabetQ){		
		Assert::That(symmetric("Q"), IsFalse());
	}
	Spec(AlphabetR){		
		Assert::That(symmetric("R"), IsFalse());
	}
	Spec(AlphabetS){		
		Assert::That(symmetric("S"), IsFalse());
	}
	Spec(AlphabetT){		
		Assert::That(symmetric("T"), IsTrue());
	}
	Spec(AlphabetU){		
		Assert::That(symmetric("U"), IsTrue());
	}
	Spec(AlphabetV){		
		Assert::That(symmetric("V"), IsTrue());
	}
	Spec(AlphabetW){		
		Assert::That(symmetric("W"), IsTrue());
	}
	Spec(AlphabetX){		
		Assert::That(symmetric("X"), IsTrue());
	}
	Spec(AlphabetY){		
		Assert::That(symmetric("Y"), IsTrue());
	}
	Spec(AlphabetZ){	
		Assert::That(symmetric("Z"), IsFalse());
	}
	Spec(Numbers0){
		Assert::That(symmetric("0"), IsTrue());
	}
	Spec(Numbers1){	
		Assert::That(symmetric("1"), IsFalse());
	}
	Spec(Numbers2){	
		Assert::That(symmetric("2"), IsFalse());
	}
	Spec(Numbers3){	
		Assert::That(symmetric("3"), IsFalse());
	}
	Spec(Numbers4){	
		Assert::That(symmetric("4"), IsFalse());
	}
	Spec(Numbers5){	
		Assert::That(symmetric("5"), IsFalse());
	}
	Spec(Numbers6){	
		Assert::That(symmetric("6"), IsFalse());
	}
	Spec(Numbers7){	
		Assert::That(symmetric("7"), IsFalse());
	}
	Spec(Numbers8){	
		Assert::That(symmetric("8"), IsTrue());
	}
	Spec(Numbers9){	
		Assert::That(symmetric("9"), IsFalse());
	}
	Spec(Hello){	
		Assert::That(symmetric("HELLO"), IsFalse());
	}
	Spec(Jol){	
		Assert::That(symmetric("JOL"), IsTrue());
	}
	Spec(E83){	
		Assert::That(symmetric("E83"), IsTrue());
	}
	Spec(PairAA){	
		Assert::That(symmetric("AA"), IsTrue());
	}
	Spec(Pair2S){	
		Assert::That(symmetric("2S"), IsTrue());
	}
	Spec(Pair3E){	
		Assert::That(symmetric("3E"), IsTrue());
	}
	Spec(Pair9P){	
		Assert::That(symmetric("9P"), IsTrue());
	}
	Spec(PairJL){	
		Assert::That(symmetric("JL"), IsTrue());
	}
	Spec(PairAI){	
		Assert::That(symmetric("AI"), IsFalse());
	}
};

int main(){
	return TestRunner::RunAllTests();
}