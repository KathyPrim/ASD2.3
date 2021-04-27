#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3/FB.h"
#include "../lab3/FB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab3test
{
	TEST_CLASS(lab3test)
	{
	public:
		
		TEST_METHOD(search_existing_key_in_queue)
		{
			Queue<int, string> queue;
			queue.push("A");
			queue.push("B");
			queue.push("C");
			Assert::AreEqual(queue.search_key("A"), 0);
			Assert::AreEqual(queue.search_key("B"), 1);
			Assert::AreEqual(queue.search_key("C"), 2);
		}

		TEST_METHOD(search_not_existing_key_in_queue)
		{
			Queue<int, string> queue;
			queue.push("A");
			queue.push("B");
			queue.push("C");
			Assert::AreEqual(queue.search_key("D"), -1);
		}
	};
}
