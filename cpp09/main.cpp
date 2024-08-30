# include <iostream>
# include <algorithm>
# include <vector>

template < typename T >
void	printCon( const T &t ) {
	for (typename T::const_iterator it = t.begin(); it != t.end(); it++) {
		std::cout << *it << "\n";
	} std::cout << std::endl;
}

size_t	JacobsthalNumbers( int idx ) {
	if (idx == 0)
		return 0;
	else if (idx == 1)
		return 1;
	return JacobsthalNumbers( idx - 1 ) + 2 * JacobsthalNumbers( idx - 2 );
}

template < typename T >
void	insertEl( T &t, int value ) {
	typename T::iterator	iter = std::lower_bound(t.begin(), t.end(), value);
	if (iter != t.end())
		t.insert(iter, value);
	else
		t.insert(t.end(), value);
}

template < typename T >
T	merge_sort( T &t ) {
	T	mainChain;
	T	pending;
	for (size_t i = 0; i < t.size(); i += 2) {
		if (i + 1 < t.size()) {
			int	a = t.at(i);
			int	b = t.at(i + 1);
			if (a < b)
				std::swap(a, b);
			mainChain.push_back(a);
			pending.push_back(b);
		} else
			pending.push_back(t.at(i));
	}
	// ::printCon(mainChain);
	std::sort(mainChain.begin(), mainChain.end());
	mainChain.insert(mainChain.begin(), pending.at(0));
	for (size_t i = 1; i < pending.size(); i++)
		::insertEl(mainChain, pending.at(i));
	::printCon(mainChain);
	// ::printCon(pending);
	return mainChain;
}

int	main( void ) {
	int	arr[] = {457,915,829,738,945,401,401,112,47,199,635,397,225,964,991,339,663,727,208,358,823,259,488,829,914,977,407,385,759,896,660,315,768,835,146,802,838,386,30,204,216,13,258,987,583,278,557,327,147,354,326,831,879,463,668,374,181,125,719,395,597,559,721,844,75,304,300,372,344,130,824,279,828,76,726,407,750,558,783,344,195,444,978,101,549,887,426,221,433,155,801,920,37,903,739,611,702,536,198,737,658,333,191,155,289,263,73,699,798,525,841,539,208,135,730,172,757,724,946,543,512,752,755,446,290,184,942,160,682,969,596,699,345,848,316,734,928,692,482,48,256,701,527,683,232,391,937,457,795,404,39,767,792,487,653,899,586,378,979,248,773,387,831,498,389,686,63,21,919,541,6,989,836,133,543,683,1,484,754,465,162,50,515,146,951,645,45,746,193,651,735,774,522,586,298,950,135,329,675,692,756,971,738,168,943,521,889,949,152,225,842,914,949,344,959,65,901,174,796,997,363,487,788,618,632,458,885,382,242,421,236,724,857,236,568,251,479,303,757,77,956,20,986,680,529,89,911,718,45,328,113,103,307,453,410,545,581,401,952,448,943,501,502,839,89,342,627,602,403,174,220,527,875,247,70,344,308,302,946,424,474,58,435,777,213,807,95,493,56,139,638,479,895,131,43,485,557,413,192,147,256,374,164,815,96,735,622,874,566,256,918,691,736,916,25,777,479,866,548,689,960,897,543,831,978,67,916,509,419,660,807,949,191,909,216,751,752,2,289,99,490,394,889,798,925,647,766,850,429,599,927,162,999,424,133,759,486,731,370,467,862,117,134,734,281,13,154,330,677,990,199,368,1,540,27,955,819,740,900,992,140,374,298,416,896,612,690,224,190,119,18,749,421,13,391,238,295,404,808,557,543,77,906,162,801,751,397,716,850,340,735,512,823,174,633,791,784,638,767,868,800,111,97,348,677,590,143,515,643,88,772,610,953,522,378,990,884,560,235,856,34,44,11,751,291,755,868,852,345,375,127,294,807,330,59,80,672,557,450,357,899,963,489,458,979,101,684,322,612,996,98,411,135,704,304,642,172,179,378,473,571,927,37,41,343,773,154,207,805,931,344,154,618,56,803,399,28,889,248,954,655,65,558,309,501,562,767,718,167,834,832,26,838,939,293,349,232,231,305,653,839,310,502,300,707,222,468,955,973,278,594,487,643,800,59,652,141,446,545,503,953,241,810,120,479,281,787,623,56,894,367,815,985,525,712,647,561,867,773,821,187,884,563,457,216,981,304,796,380,669,893,64,365,87,193,306,350,937,331,533,385,256,798,738,473,815,824,430,626,380,235,723,970,148,169,569,865,314,952,302,115,35,445,27,148,876,904,571,837,400,318,707,403,192,551,914,252,5,534,459,70,225,615,12,146,516,770,535,162,900,567,890,175,631,934,347,278,254,213,449,707,974,907,977,143,857,664,974,257,546,201,445,590,156,432,47,496,721,144,341,915,874,233,152,140,249,988,94,420,44,797,36,735,612,921,130,399,398,322,657,260,807,876,916,940,932,157,965,326,662,668,388,762,678,16,390,608,591,974,36,303,459,677,556,97,60,10,58,28,615,237,301,738,380,819,454,951,555,688,89,78,297,648,953,141,71,521,584,558,698,82,242,781,180,347,948,860,333,669,168,354,919,764,215,649,149,195,658,77,705,580,994,545,360,156,743,932,310,227,175,634,343,53,155,554,557,186,112,189,976,72,896,310,479,637,994,917,129,181,754,756,121,486,882,597,293,72,210,608,246,330,179,625,455,985,712,14,459,869,67,320,98,40,736,670,802,421,166,351,129,799,446,17,304,212,721,269,201,979,825,637,48,667,197,49,910,107,660,875,348,725,343,947,502,579,235,632,831,739,928,661,911,705,986,855,857,907,492,757,420,995,134,787,731,380,493,319,109,395,899,173,508,950,990,100,241,976,59,835,821,795,628,158,642,858,536,108,914,937,583,285,83,509,810,746,664,535,648,936,1,207,497,911,942,75,124,50,510,462,461,811,932,63,25,240,637,326,762,621,349,972,361,505,707,196,210,364,183,649,815,946,457,13,584,80,752,117,559,885,541,390,140,517,863,632,672,498,494,431,313,613,373,353,747,344,143,854,411,492,607,241,602,402,609,108,991,636,709,971,806,432,422,838,520,34,323,756,555,962,496,257,330,801,893,248,392,796,834,58,875,660,46,492,581,530,392,988,525,881,688,442,862,512,44,417,832,269,782,469,85,93,943,578,310,332,399,769,828,571,842,115,239,75,914,211,293,566,196,908,211,833,83,819,711,199,447,128,130,91,812,796,206,954,202,48,748,207,27,599,986,570,164,530,507,841,874,812,865,610,883,321,504,213,3,875,541,377,235,395,173,197,433,702,114,266,677,698,540,771,153,830,526,213,603,496,119,945,755,626,460,548,611,197,275,353,117,485,364,619,145,571,837,285,759,775,124,389,179,212,760,359,282,155,944,131,841,31,89,425,509,544,253,24,432,83,673,62,550,65,103,778,652,312,481,268,46,712,477,93,433,994,379,666,390,595,26,494,384,333,312,990,313,173,693,314,574,596,741,372,868,5,398,507,292,274,458,600,359,42,945,952,675,963,211,689,742,186,962,970,17,418,277,974,631,452,485,320,624,886,383,695,646,651,788,205,766,198,678,687,700,267,316,528,435,990,836,318,761,600,411,621,193,478,532,910,457,110,934,835,152,551,254,610,671,809,332,156,513,52,766,653,974,216,156,555,119,469,349,619,510,116,46,95,408,101,193,616,805,980,487,687,426,433,197,607,574,990,195,781,361,961,121,101,146,968,922,163,23,964,97,908,834,826,272,716,272,706,679,146,575,128,800,745,310,257,786,831,153,956,618,307,219,839,347,737,510,600,674,967,953,688,678,51,685,327,914,814,310,618,800,766,526,91,947,115,96,388,170,604,239,498,6,834,592,511,257,27,211,996,686,345,842,114,864,506,662,961,418,443,82,422,405,273,158,686,789,899,770,692,200,166,844,511,991,297,447,911,730,570,206,988,730,463,890,71,910,481,240,58,244,236,718,625,85,77,530,548,79,692,929,255,415,541,839,651,411,571,348,510,603,444,456,139,148,803,573,283,154,425,546,460,899,817,509,875,114,983,689,904,911,900,635,207,668,424,463,11,941,108,639,249,11,392,100,864,630,895,865,206,842,215,977,837,259,317,37,277,904,18,379,187,775,556,552,819,425,137,850,873,328,354,315,750,548,395,151,623,967,116,78,877,338,94,410,951,940,258,889,246,316,527,341,295,426,822,744,468,544,797,601,754,46,879,90,154,840,553,811,827,262,92,807,584,850,508,997,582,895,61,477,393,421,580,745,190,936,719,899,813,949,469,189,989,414,235,714,566,916,651,302,962,778,771,872,903,981,422,666,727,194,636,267,968,591,740,407,374,84,69,633,954,616,239,137,314,132,120,275,315,336,51,317,372,54,655,847,237,543,852,800,363,873,743,431,997,56,597,266,893,556,339,138,387,230,590,910,702,163,378,693,431,50,284,643,189,88,131,641,940,447,164,154,859,70,228,894,275,253,276,855,947,909,741,141,84,242,86,544,216,18,988,240,285,589,564,803,513,523,536,311,79,805,505,766,621,861,630,324,658,365,696,752,257,644,145,315,532,48,255,330,279,725,514,660,990,524,266,307,865,940,760,671,15,355,307,365,480,956,495,323,291,976,409,517,73,298,840,748,526,42,684,649,869,373,955,34,395,960,1,68,79,337,92,743,184,808,752,761,142,251,688,713,8,973,594,852,886,123,37,338,666,869,542,305,288,750,780,268,579,194,944,826,619,239,20,474,463,738,54,597,374,267,240,808,957,672,871,814,902,735,626,629,241,528,165,799,40,71,772,165,124,497,585,8,934,504,924,195,79,605,565,423,400,295,596,852,179,827,512,973,489,471,58,28,939,329,814,761,389,153,332,990,796,751,909,461,175,635,429,485,980,145,296,403,765,843,846,145,354,678,56,286,608,828,205,319,582,643,871,605,937,125,363,698,390,703,590,495,389,565,477,471,295,224,922,109,552,763,228,187,400,534,895,495,81,103,644,810,610,667,539,594,460,721,935,712,875,54,918,160,10,625,178,515,145,149,944,441,890,579,681,699,357,774,805,275,178,862,832,255,202,836,52,295,29,633,350,57,677,777,376,237,878,202,838,401,27,63,508,98,778,645,924,83,186,485,317,535,786,492,333,30,136,570,617,325,733,32,137,16,893,835,594,93,740,373,676,46,203,729,864,977,813,426,419,162,726,793,509,691,364,203,372,554,613,676,774,807,263,263,590,771,343,177,739,166,609,699,491,620,272,500,9,801,642,404,329,63,711,347,413,149,213,857,389,361,225,510,432,120,13,219,89,748,476,45,972,832,987,379,538,49,983,210,443,846,966,540,893,103,143,463,65,149,851,919,17,623,40,403,888,139,519,986,118,213,1,678,84,484,393,356,663,330,131,430,69,124,762,99,585,49,31,920,862,276,212,587,31,765,127,320,380,412,418,214,494,994,792,767,372,111,398,52,591,846,663,179,124,348,965,422,675,631,960,580,96,431,521,151,876,523,502,502,968,840,285,738,405,314,832,71,347,225,32,588,531,224,293,68,891,341,499,857,958,406,359,137,405,404,911,40,491,158,569,73,747,402,643,100,43,526,684,970,208,316,532,782,246,823,565,265,543,207,643,207,754,227,444,461,577,245,673,432,204,742,81,882,755,434,529,170,205,569,56,494,3,354,324,947,333,991,449,727,248,380,986,93,303,751,903,30,476,339,988,952,716,104,457,860,574,30,631,907,443,792,667,919,490,511,9,106,50,586,874,340,952,939,511,543,785,989,733,764,772,56,213,682,48,212,58,549,561,983,605,439,974,509,285,651,265,99,614,986,472,456,821,785,944,351,348,834,859,184,654,378,574,18,576,517,383,215,217,481,999,450,59,849,748,826,13,775,894,867,735,932,250,150,828,596,873,493,634,857,210,78,410,84,711,583,846,416,241,554,995,754,387,302,221,823,441,539,543,646,291,316,821,608,967,636,751,985,28,951,887,297,820,31,774,297,411,932,149,721,276,560,324,344,19,796,773,878,774,737,310,849,719,920,533,544,898,561,205,168,865,122,883,885,779,62,775,348,176,413,704,314,962,524,791,631,355,185,490,107,871,648,790,869,647,539,776,704,594,882,272,553,739,258,817,868,416,173,357,757,967,206,798,359,746,404,42,268,10,242,119,194,777,4,148,634,346,85,347,131,241,971,922,758,812,114,10,738,589,868,131,914,527,458,25,668,613,672,523,269,332,450,969,315,204,526,382,216,983,360,421,1000,564,506,604,834,480,380,72,444,9,42,828,967,718,869,350,590,654,462,436,959,642,167,428,304,77,878,274,150,589,414,784,307,30,200,861,277,495,719,664,591,240,726,344,689,2,245,776,378,23,548,748,758,769,603,72,701,564,754,161,203,122,932,162,432,768,685,171,762,290,376,567,804,498,209,878,248,631,773,394,482,169,466,420,601,934,433,10,646,823,546,134,100,218,666,852,496,385,663,690,86,823,60,859,890,706,506,860,391,613,796,948,944,819,316,296,535,620,932,527,193,306,609,734,900,755,614,856,920,834,910,571,613,919,349,15,448,214,404,581,80,853,551,891,590,852,756,213,864,560,927,789,610,899,472,127,385,135,844,282,931,961,794,275,379,736,259,728,621,628,386,390,851,817,947,90,99,93,87,154,159,835,157,786,941,774,418,285,839,20,879,654,66,931,575,18,575,605,123,831,682,428,370,843,662,365,893,403,878,989,722,36,714,106,167,237,873,148,755,918,730,297,982,627,611,544,118,28,317,811,611,235,982,320,19,588,321,774,10,617,720,354,560,936,275,257,333,781,793,670,900,508,241,65,200,966,113,973,588,791,974,264,750,209,532,59,996,220,188,470,561,609,364,795,348,637,298,958,917,493,742,367,149,200,806,145,956,973,147,997,853,788,491,252,283,338,98,612,121,75,297,503,646,630,600,337,727,33,630,130,123,482,182,894,416,15,710,755,336,999,541,863,55,730,405,228,436,641,881,549,258,198,393,696,423,329,892,912,33,824,884,760,950,541,145,121,30,826,88,81,611,605,174,475,547,730,576,375,888,267,998,329,543,76,117,873,318,730,252,152,622,49,359,499,128,974,336,948,335,88,258,719,352,259,699,803,969,62,504,204,935,150,894,965,577,155,344,35,431,538,920,199,657,871,539,746,835,850,743,913,285,310,527,520,183,235,404,518,916,358,736,476,178,867,281,953,684,376,729,257,742,409,781,874,685,467,854,849,762,242,456,819,276,846,782,497,120,418,674,27,569,371,383,410,113,671,421,986,25,749,990,954,312,421,217,256,378,163,506,879,520,349,418,40,704,85,491,844,872,30,986,489,150,356,760,781,316,344,259,488,463,604,952,757,85,617,9,312,249,830,813,710,239,148,535,591,682,808,167,938,889,583,763,7,811,384,291,873,773,738,114,6,556,640,296,758,262,177,931,794,436,636,956,593,644,859,466,730,752,993,196,886,355,26,427,497,663,567,8,255,498,133,358,995,206,303,53,222,992,249,339,750,839,764,412,709,931,234,574,299,795,786,706,384,933,598,728,338,673,525,110,811,321,481,609,792,517,786,205,504,313,11,322,509,659,238,737,163,981,584,171,484,72,259,612,887,877,389,421,652,324,297,890,264,770,558,979,261,382,118,390,315,411,760,881};
	std::vector< int >	vCon(arr, arr + sizeof(arr) / sizeof(*arr));
	// ::printCon(vCon);
	::merge_sort(vCon);
}
