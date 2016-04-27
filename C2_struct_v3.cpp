#include "stdio.h"
#include "math.h"

//#define EPSILON 10-


namespace AHC
{

	void logFloat(float value)
	{
		printf("%f", value);
	}





	struct V3
	{
		// Members

		float X;
		float Y;
		float Z;

//-----------------------------------------------------------------------------
		// Constructors
		V3()
		{
			X = 0.f;
			Y = 0.f;
			Z = 0.f;
		}

		V3(float InX, float InY, float InZ)
		{
			X = InX;
			Y = InY;
			Z = InZ;
		}
		

		// Methods/ Functions
		float Length()
		{
			return sqrt(X*X + Y*Y + Z*Z);
		}

		void Print()
		{
			printf("V3:(X=%f, Y=%f, Z=%f)\n", X, Y, Z);
		}

		V3 Normalize()
		{
			float L= Length();
			if (L == 0.f)
			{
				return V3(0.f,0.f,0.f);
			}
			
			
			return V3(X / L, Y / L, Z / L);

			//result.X 
		}


	};



}


using namespace AHC;

int main()
{

	V3 vector1(9.f,10.f,20.f);


	V3 normalized_vector1 = vector1.Normalize();

	normalized_vector1.Print();
	//vector1.Print();

	return 0;
}
