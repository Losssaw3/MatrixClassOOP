#pragma once
#include "matrix.h"

	struct BasicTask
	{
	public:
		
		/**
		* @brief Чисто виртуальный метод для решения первого задания
		*/
		virtual Matrix task1() = 0;

		/**
		* @brief Чисто виртуальный метод для решения второго задания
		*/
		virtual Matrix task2() = 0;
	};