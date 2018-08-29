#include <iostream>
#include "globalVariables.h"
#include "genpas.h"


int GP::sizeAlphabet = 0;
std::vector<char> GP::temp_alphabet;
std::ofstream GP::fout_password("genpas.txt", std::ios::out);
std::ifstream GP::fin_alphabet("alphabet.txt", std::ios::in);

using GP::sizeAlphabet;
using GP::temp_alphabet;
using GP::fout_password;
using GP::fin_alphabet;

using std::cout;
using std::endl;


void inputAlphabet()
{
	std::vector<char> temp_ch_alph;


	char ch = ' ';
	while (GP::fin_alphabet.get(ch))
	{
		temp_ch_alph.push_back(ch);
	}

	for (int i = 0; i < temp_ch_alph.size(); i++)
	{
		temp_alphabet.push_back(temp_ch_alph[i]);
	}

	sizeAlphabet = temp_alphabet.size();
}

void generateFullPasswords(int lenght_pas, bool sww)
{
	// локальный алфавит
	char* alphabet = new char[sizeAlphabet + 1];
	alphabet[sizeAlphabet] = '\0';

	for (int i = 0; i < sizeAlphabet; i++)
	{
		alphabet[i] = temp_alphabet[i];
	}


	// выбор между режимом функции
	int len;

	if (sww == true)
	{
		len = 1;
	}
	else
	{
		len = lenght_pas;
	}
	
	// генерация с пушим в файл
	for (; len <= lenght_pas; len++)
	{
		char *pas_now = new char[len + 1];

		// инициальзация temp в данный момент
		for (int i = 0; i < len; i++)
		{
			pas_now[i] = ' ';
		}

		pas_now[len] = '\0';


		// 1
		if (len >= 1)
		{
			for (int FOR_1 = 0; FOR_1 < sizeAlphabet; FOR_1++)
			{
				pas_now[0] = alphabet[FOR_1];

				if (len == 1)
				{
					fout_password << pas_now << endl;
				}

				// 2
				if (len >= 2)
				{
					for (int FOR_2 = 0; FOR_2 < sizeAlphabet; FOR_2++)
					{
						pas_now[1] = alphabet[FOR_2];

						if (len == 2)
						{
							fout_password << pas_now << endl;
						}

						// 3
						if (len >= 3)
						{
							for (int FOR_3 = 0; FOR_3 < sizeAlphabet; FOR_3++)
							{
								pas_now[2] = alphabet[FOR_3];

								if (len == 3)
								{
									fout_password << pas_now << endl;
								}

								// 4
								if (len >= 4)
								{
									for (int FOR_4 = 0; FOR_4 < sizeAlphabet; FOR_4++)
									{
										pas_now[3] = alphabet[FOR_4];

										if (len == 4)
										{
											fout_password << pas_now << endl;
										}

										// 5
										if(len >= 5)
										{
											for(int FOR_5 = 0; FOR_5 < sizeAlphabet; FOR_5++)
											{
												pas_now[4] = alphabet[FOR_5];

												if (len == 5)
												{
													fout_password << pas_now << endl;
												}

												// 6
												if(len >= 6)
												{
													for(int FOR_6 = 0; FOR_6 < sizeAlphabet; FOR_6++)
													{
														pas_now[5] = alphabet[FOR_6];

														if(len == 6)
														{
															fout_password << pas_now << endl;
														}

														// 7
														if(len >= 7)
														{
															for(int FOR_7 = 0; FOR_7 < sizeAlphabet; FOR_7++)
															{
																pas_now[6] = alphabet[FOR_7];

																if(len == 7)
																{
																	fout_password << pas_now << endl;
																}

																//8
																if(len >= 8)
																{
																	for(int FOR_8 = 0; FOR_8 < sizeAlphabet; FOR_8++)
																	{
																		pas_now[7] = alphabet[FOR_8];

																		if(len == 8)
																		{
																			fout_password << pas_now << endl;
																		}

																		//9
																		if(len >= 9)
																		{
																			for(int FOR_9 = 0; FOR_9 < sizeAlphabet; FOR_9++)
																			{
																				pas_now[8] = alphabet[FOR_9];

																				if(len == 9)
																				{
																					fout_password << pas_now << endl;
																				}

																				//10
																				if(len >= 10)
																				{
																					for(int FOR_10 = 0; FOR_10 < sizeAlphabet; FOR_10++)
																					{
																						pas_now[9] = alphabet[FOR_10];

																						if(len == 10)
																						{
																							fout_password << pas_now << endl;
																						}

																						//11
																						if(len >= 11)
																						{
																							for(int FOR_11 = 0; FOR_11 < sizeAlphabet; FOR_11++)
																							{
																								pas_now[10] = alphabet[FOR_11];

																								if(len == 11)
																								{
																									fout_password << pas_now << endl;
																								}

																								//12
																								if(len >= 12)
																								{
																									for(int FOR_12 = 0; FOR_12 < sizeAlphabet; FOR_12++)
																									{
																										pas_now[11] = alphabet[FOR_12];

																										if(len == 12)
																										{
																											fout_password << pas_now << endl;
																										}

																										//13
																										if(len >= 13)
																										{
																											for(int FOR_13 = 0; FOR_13 < sizeAlphabet; FOR_13++)
																											{
																												pas_now[12] = alphabet[FOR_13];

																												if(len == 13)
																												{
																													fout_password << pas_now << endl;
																												}

																												//14
																												if(len >= 14)
																												{
																													for(int FOR_14 = 0; FOR_14 < sizeAlphabet; FOR_14++)
																													{
																														pas_now[13] = alphabet[FOR_14];

																														if(len == 14)
																														{
																															fout_password << pas_now << endl;
																														}

																														//15
																														if(len >= 15)
																														{
																															for(int FOR_15 = 0; FOR_15 < sizeAlphabet; FOR_15++)
																															{
																																pas_now[14] = alphabet[FOR_15];

																																if(len == 15)
																																{
																																	fout_password << pas_now << endl;
																																}

																																//16
																																if(len >= 16)
																																{
																																	for(int FOR_16 = 0; FOR_16 < sizeAlphabet; FOR_16++)
																																	{
																																		pas_now[15] = alphabet[FOR_16];

																																		if(len == 16)
																																		{
																																			fout_password << pas_now << endl;
																																		}

																																		//17
																																		if(len >= 17)
																																		{
																																			for(int FOR_17 = 0; FOR_17 < sizeAlphabet; FOR_17++)
																																			{
																																				pas_now[16] = alphabet[FOR_17];

																																				if(len == 17)
																																				{
																																					fout_password << pas_now << endl;
																																				}

																																				//18
																																				if(len >= 18)
																																				{
																																					for(int FOR_18 = 0; FOR_18 < sizeAlphabet; FOR_18++)
																																					{
																																						pas_now[17] = alphabet[FOR_18];

																																						if(len == 18)
																																						{
																																							fout_password << pas_now << endl;
																																						}

																																						//19
																																						if(len >= 19)
																																						{
																																							for(int FOR_19 = 0; FOR_19 < sizeAlphabet; FOR_19++)
																																							{
																																								pas_now[18] = alphabet[FOR_19];

																																								if(len == 19)
																																								{
																																									fout_password << pas_now << endl;
																																								}

																																								//20
																																								if(len >= 20)
																																								{
																																									for(int FOR_20 = 0; FOR_20 < sizeAlphabet; FOR_20++)
																																									{
																																										pas_now[19] = alphabet[FOR_20];

																																										if(len == 20)
																																										{
																																											fout_password << pas_now << endl;
																																										}

																																										//21
																																										if(len >= 21)
																																										{
																																											for(int FOR_21 = 0; FOR_21 < sizeAlphabet; FOR_21++)
																																											{
																																												pas_now[20] = alphabet[FOR_21];

																																												if(len == 21)
																																												{
																																													fout_password << pas_now << endl;
																																												}

																																												//22
																																												if(len >= 22)
																																												{
																																													for(int FOR_22 = 0; FOR_22 < sizeAlphabet; FOR_22++)
																																													{
																																														pas_now[21] = alphabet[FOR_22];

																																														if(len == 22)
																																														{
																																															fout_password << pas_now << endl;
																																														}

																																														//23
																																														if(len >= 23)
																																														{
																																															for(int FOR_23 = 0; FOR_23 < sizeAlphabet; FOR_23++)
																																															{
																																																pas_now[22] = alphabet[FOR_23];

																																																if(len == 23)
																																																{
																																																	fout_password << pas_now << endl;
																																																}

																																																//24
																																																if(len >= 24)
																																																{
																																																	for(int FOR_24 = 0; FOR_24 < sizeAlphabet; FOR_24++)
																																																	{
																																																		pas_now[23] = alphabet[FOR_24];

																																																		if(len == 24)
																																																		{
																																																			fout_password << pas_now << endl;
																																																		}

																																																		//25
																																																		if(len >= 25)
																																																		{
																																																			for(int FOR_25 = 0; FOR_25 < sizeAlphabet; FOR_25++)                                              
																																																			{
																																																				pas_now[24] = alphabet[FOR_25];

																																																				if(len == 25)
																																																				{
																																																					fout_password << pas_now << endl;
																																																				}

																																																				//26
																																																				if(len >= 26)
																																																				{
																																																					for(int FOR_26 = 0; FOR_26 < sizeAlphabet; FOR_26++)
																																																					{
																																																						pas_now[25] = alphabet[FOR_26];

																																																						if(len == 26)
																																																						{
																																																							fout_password << pas_now << endl;
																																																						}

																																																						//27
																																																						if(len >= 27)
																																																						{
																																																							for(int FOR_27 = 0; FOR_27 < sizeAlphabet; FOR_27++)
																																																							{
																																																								pas_now[26] = alphabet[FOR_27];

																																																								if(len == 27)
																																																								{
																																																									fout_password << pas_now << endl;
																																																								}

																																																								//28
																																																								if(len >= 28)
																																																								{
																																																									for(int FOR_28 = 0; FOR_28 < sizeAlphabet; FOR_28++)
																																																									{
																																																										pas_now[27] = alphabet[FOR_28];

																																																										if(len == 28)
																																																										{
																																																											fout_password << pas_now << endl;
																																																										}

																																																										//29
																																																										if(len >= 29)
																																																										{
																																																											for(int FOR_29 = 0; FOR_29 < sizeAlphabet; FOR_29++)
																																																											{
																																																												pas_now[28] = alphabet[FOR_29];

																																																												if(len == 29)
																																																												{
																																																													fout_password << pas_now << endl;
																																																												}

																																																												//30
																																																												if(len >= 30)
																																																												{
																																																													for(int FOR_30 = 0; FOR_30 < sizeAlphabet; FOR_30++)
																																																													{
																																																														pas_now[29] = alphabet[FOR_30];

																																																														if(len == 30)
																																																														{
																																																															fout_password << pas_now << endl;
																																																														}

																																																														//31
																																																														if(len >= 31)
																																																														{
																																																															for(int FOR_31 = 0; FOR_31 < sizeAlphabet; FOR_31++)
																																																															{
																																																																pas_now[30] = alphabet[FOR_31];

																																																																if(len == 31)
																																																																{
																																																																	fout_password << pas_now << endl;
																																																																}

																																																																//32
																																																																if(len >= 32)
																																																																{
																																																																	for(int FOR_32 = 0; FOR_32 < sizeAlphabet; FOR_32++)
																																																																	{
																																																																		pas_now[31] = alphabet[FOR_32];
																																																																		
																																																																		if(len == 32)
																																																																		{
																																																																			fout_password << pas_now << endl;
																																																																		}
																																																																	}
																																																																}
																																																															}
																																																														}
																																																													}
																																																												}
																																																											}
																																																										}
																																																									}
																																																								}
																																																							}
																																																						}
																																																					}
																																																				}
																																																			}
																																																		}
																																																	}
																																																}
																																															}
																																														}
																																													}
																																												}
																																											}
																																										}
																																									}
																																								}
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}