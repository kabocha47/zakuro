#if talse
// git_2   


//�C���N���[�h�t�@�C���w��
#include <opencv2/opencv.hpp>
//�ÓI�����N���C�u�����̎w��
//#include <opencv2/opencv_lib.hpp>
//���O��Ԃ̎w��
using namespace cv;
int main()
{
	//width120, height100�̉摜���쐬
	Mat src = Mat::zeros(100, 120, CV_8UC3);
	//�摜��Hello World!��`��
	putText(src, "Hello World!", Point(5, 50), FONT_HERSHEY_SIMPLEX, 0.6, cv::Scalar(0, 0, 200), 2, CV_AA);
	//�摜��\��
	imshow("", src);
	//�E�C���h�E�̕\������(0�̓L�[���������܂ŕ��Ȃ�)
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
	// �摜���ǂݍ��܂�Ȃ�������v���O�����I��
	if (src_img.empty()) return -1;

	// ���ʉ摜�\��
	//cv::namedWindow("Image", CV_WINDOW_AUTOSIZE | CV_WINDOW_FREERATIO);
	cv::imshow("Image", src_img);
	cv::waitKey(0);
}

#endif

