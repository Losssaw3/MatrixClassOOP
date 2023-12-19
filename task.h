#pragma once
#include "basicTask.h"


	struct Tasks : public BasicTask
	{
	private:
		Matrix matrix;

	public:
		/**
		* @brief Инициализация объекта типа Tasks
		* @param matrix Матрица с которой надо выполнить задания
		*/
		Tasks(Matrix matrix);

		/**
		* @brief function which replace the minimal modulus element with zero in every column
		* @return Мchanged matrix
		*/
		Matrix task1() override;

		/**
		* @brief function which delete columns where first element more than last
		* @return changed matrix
		*/
		Matrix task2() override; 
	};