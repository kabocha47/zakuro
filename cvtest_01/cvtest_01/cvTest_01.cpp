#if talse
// git_2   


//インクルードファイル指定
#include <opencv2/opencv.hpp>
//静的リンクライブラリの指定
//#include <opencv2/opencv_lib.hpp>
//名前空間の指定
using namespace cv;
int main()
{
	//width120, height100の画像を作成
	Mat src = Mat::zeros(100, 120, CV_8UC3);
	//画像にHello World!を描く
	putText(src, "Hello World!", Point(5, 50), FONT_HERSHEY_SIMPLEX, 0.6, cv::Scalar(0, 0, 200), 2, CV_AA);
	//画像を表示
	imshow("", src);
	//ウインドウの表示時間(0はキーが押されるまで閉じない)
	waitKey(0);
	return 0;
}
#endif


#if true

#include <opencv2/opencv.hpp>
//#include <opencv2/opencv_lib.hpp>
//#include <opencv2/highgui/highgui.hpp>

int main(void)
{
	std::string filename = "panda.bmp";
	cv::Mat image = cv::imread(filename);
	cv::imshow("ImageWindow", image);
	cv::waitKey();
	return 0;
}
#endif


#if false
int main(void)
{ 
	std::string filename = "panda.bmp";

	cv::Mat src_img = cv::imread(filename, 1);
	cv::Mat image = cv::imread(filename);
	// 画像が読み込まれなかったらプログラム終了
	if (src_img.empty()) return -1;

	// 結果画像表示
	//cv::namedWindow("Image", CV_WINDOW_AUTOSIZE | CV_WINDOW_FREERATIO);
	cv::imshow("Image", src_img);
	cv::waitKey(0);
}

#endif

