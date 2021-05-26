#pragma once

#include "cv.h"
#include "StereoSubsGlobals.h"
#include "StereoSubs_main.h"



namespace StereoSubs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkboxPauseComputing;
	private: System::Windows::Forms::GroupBox^  groupboxBlockMatchAnalysis;
	protected: 




	private: System::Windows::Forms::TextBox^  textboxMinDisparity;
	private: System::Windows::Forms::TextBox^  textboxSearchLenghtDisparity;


	private: System::Windows::Forms::TextBox^  textboxBlockSize;
	private: System::Windows::Forms::Label^  labelSearchLenghtDisparity;


	private: System::Windows::Forms::Label^  labelMaxRange;
	private: System::Windows::Forms::Label^  labelBlockSize;
	private: System::Windows::Forms::HScrollBar^  scrollbarSearchLenghtDisparity;

	private: System::Windows::Forms::HScrollBar^  scrollbarMinDisparity;

	private: System::Windows::Forms::HScrollBar^  scrollbarBlockSize;
	private: System::Windows::Forms::GroupBox^  groupboxMaskOperations;
	private: System::Windows::Forms::TextBox^  textboxUniquenessRatio;

	private: System::Windows::Forms::HScrollBar^  scrollbarUniquenessRatio;

	private: System::Windows::Forms::TextBox^  textboxTextureThreshold;
	private: System::Windows::Forms::Label^  labelUniquenessRatio;


	private: System::Windows::Forms::HScrollBar^  scrollbarTextureThreshold;

	private: System::Windows::Forms::Label^  labelTextureThreshold;

	private: System::Windows::Forms::GroupBox^  groupboxPrecomputingOperations;
	private: System::Windows::Forms::CheckBox^  checkboxGaussianBlur;
	private: System::Windows::Forms::CheckBox^  checkboxMedian;
	private: System::Windows::Forms::TextBox^  textboxFilterSize;
	private: System::Windows::Forms::Label^  labelFilterSize;
	private: System::Windows::Forms::TextBox^  textboxTimesToHalfsize;
	private: System::Windows::Forms::HScrollBar^  scrollbarFilterSize;
	private: System::Windows::Forms::Label^  labelTimesToHalfsize;
	private: System::Windows::Forms::HScrollBar^  scrollbarTimesToHalfsize;

	private: System::Windows::Forms::CheckBox^  checkboxPreview;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  labelShowWindows;
	private: System::Windows::Forms::CheckBox^  checkboxStereoRight;



	private: System::Windows::Forms::CheckBox^  checkboxStereoLeft;

	private: System::Windows::Forms::Button^  buttonOpenSequence;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  butStart;






	private: System::Windows::Forms::CheckBox^  checkboxDisparityMap;
	private: System::Windows::Forms::TextBox^  textboxPrefilterIntensitySize;

	private: System::Windows::Forms::Label^  labelPrefilterIntensitySize;
	private: System::Windows::Forms::HScrollBar^  scrollbarPrefilterIntensitySize;



	private: System::Windows::Forms::TextBox^  textboxSpeckleRange;
	private: System::Windows::Forms::HScrollBar^  scrollbarSpeckleRange;
	private: System::Windows::Forms::Label^  labelSpeckleRange;
	private: System::Windows::Forms::TextBox^  textboxSpeckleWindowSize;
	private: System::Windows::Forms::HScrollBar^  scrollbarSpeckleWindowSize;
	private: System::Windows::Forms::Label^  labelSpeckleWindowSize;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textboxRight;

	private: System::Windows::Forms::Button^  buttonOpenSequenceRight;
private: System::Windows::Forms::OpenFileDialog^  openFileDialogRight;




















private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialogSaveToFolder;

private: System::Windows::Forms::Button^  buttonSaveToFolder;
private: System::Windows::Forms::TextBox^  textboxSaveToFolder;
private: System::Windows::Forms::Label^  labelResultsSaveTo;





















private: System::Windows::Forms::FontDialog^  fontDialog1;
private: System::Windows::Forms::Button^  buttonFont;
private: System::Windows::Forms::Button^  buttonSubtitlesFile;
private: System::Windows::Forms::OpenFileDialog^  openFileDialogSubtitlesFile;


private: System::Windows::Forms::HScrollBar^  scrollbarSubtitlesBorderSize;

private: System::Windows::Forms::Label^  labelSubtitlesBorderSize;
private: System::Windows::Forms::TextBox^  textboxSubtitlesBorderSize;
private: System::Windows::Forms::TextBox^  textboxMovieName;

private: System::Windows::Forms::Label^  labelMovieName;
private: System::Windows::Forms::TextBox^  textboxSubtitlesLanguage;

private: System::Windows::Forms::Label^  labelSubtitlesLanguage;
private: System::Windows::Forms::ComboBox^  comboboxMovieFrameRate;
private: System::Windows::Forms::Label^  labelMovieFrameRate;
private: System::Windows::Forms::TextBox^  textboxScaleFactorForDepth;

private: System::Windows::Forms::HScrollBar^  scrollbarScaleFactorForDepth;

private: System::Windows::Forms::Label^  labelScaleFactorForDepth;
private: System::Windows::Forms::TextBox^  textboxShiftFactorForDepth;

private: System::Windows::Forms::HScrollBar^  scrollbarShiftFactorForDepth;
private: System::Windows::Forms::Label^  labelShiftFactorForDepth;
private: System::Windows::Forms::Label^  labelSubtitlesType;
private: System::Windows::Forms::ComboBox^  comboboxSubtitlesType;
private: System::Windows::Forms::GroupBox^  groupboxSubtitlesFont;

private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  openSequenceToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::GroupBox^  groupboxMovieInfo;
private: System::Windows::Forms::TextBox^  textboxSubtitleFileName;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
private: System::Windows::Forms::ToolStripComboBox^  toolStripComboboxProgramTest;
private: System::Windows::Forms::GroupBox^  groupboxDepthFactors;
private: System::Windows::Forms::RadioButton^  radioButtonSettingsUseDefault;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::GroupBox^  groupBox1;































	protected: 















































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->checkboxPauseComputing = (gcnew System::Windows::Forms::CheckBox());
			this->groupboxBlockMatchAnalysis = (gcnew System::Windows::Forms::GroupBox());
			this->textboxMinDisparity = (gcnew System::Windows::Forms::TextBox());
			this->textboxSearchLenghtDisparity = (gcnew System::Windows::Forms::TextBox());
			this->textboxBlockSize = (gcnew System::Windows::Forms::TextBox());
			this->labelSearchLenghtDisparity = (gcnew System::Windows::Forms::Label());
			this->labelMaxRange = (gcnew System::Windows::Forms::Label());
			this->labelBlockSize = (gcnew System::Windows::Forms::Label());
			this->scrollbarSearchLenghtDisparity = (gcnew System::Windows::Forms::HScrollBar());
			this->scrollbarMinDisparity = (gcnew System::Windows::Forms::HScrollBar());
			this->scrollbarBlockSize = (gcnew System::Windows::Forms::HScrollBar());
			this->groupboxMaskOperations = (gcnew System::Windows::Forms::GroupBox());
			this->textboxSpeckleRange = (gcnew System::Windows::Forms::TextBox());
			this->scrollbarSpeckleRange = (gcnew System::Windows::Forms::HScrollBar());
			this->labelSpeckleRange = (gcnew System::Windows::Forms::Label());
			this->textboxSpeckleWindowSize = (gcnew System::Windows::Forms::TextBox());
			this->scrollbarSpeckleWindowSize = (gcnew System::Windows::Forms::HScrollBar());
			this->labelSpeckleWindowSize = (gcnew System::Windows::Forms::Label());
			this->textboxUniquenessRatio = (gcnew System::Windows::Forms::TextBox());
			this->scrollbarUniquenessRatio = (gcnew System::Windows::Forms::HScrollBar());
			this->textboxTextureThreshold = (gcnew System::Windows::Forms::TextBox());
			this->labelUniquenessRatio = (gcnew System::Windows::Forms::Label());
			this->scrollbarTextureThreshold = (gcnew System::Windows::Forms::HScrollBar());
			this->labelTextureThreshold = (gcnew System::Windows::Forms::Label());
			this->groupboxPrecomputingOperations = (gcnew System::Windows::Forms::GroupBox());
			this->textboxPrefilterIntensitySize = (gcnew System::Windows::Forms::TextBox());
			this->checkboxGaussianBlur = (gcnew System::Windows::Forms::CheckBox());
			this->checkboxMedian = (gcnew System::Windows::Forms::CheckBox());
			this->labelPrefilterIntensitySize = (gcnew System::Windows::Forms::Label());
			this->textboxFilterSize = (gcnew System::Windows::Forms::TextBox());
			this->labelFilterSize = (gcnew System::Windows::Forms::Label());
			this->scrollbarPrefilterIntensitySize = (gcnew System::Windows::Forms::HScrollBar());
			this->textboxTimesToHalfsize = (gcnew System::Windows::Forms::TextBox());
			this->scrollbarFilterSize = (gcnew System::Windows::Forms::HScrollBar());
			this->labelTimesToHalfsize = (gcnew System::Windows::Forms::Label());
			this->scrollbarTimesToHalfsize = (gcnew System::Windows::Forms::HScrollBar());
			this->checkboxPreview = (gcnew System::Windows::Forms::CheckBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->labelShowWindows = (gcnew System::Windows::Forms::Label());
			this->checkboxStereoRight = (gcnew System::Windows::Forms::CheckBox());
			this->checkboxStereoLeft = (gcnew System::Windows::Forms::CheckBox());
			this->buttonOpenSequence = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->butStart = (gcnew System::Windows::Forms::Button());
			this->checkboxDisparityMap = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textboxRight = (gcnew System::Windows::Forms::TextBox());
			this->buttonOpenSequenceRight = (gcnew System::Windows::Forms::Button());
			this->openFileDialogRight = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialogSaveToFolder = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->buttonSaveToFolder = (gcnew System::Windows::Forms::Button());
			this->textboxSaveToFolder = (gcnew System::Windows::Forms::TextBox());
			this->labelResultsSaveTo = (gcnew System::Windows::Forms::Label());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->buttonFont = (gcnew System::Windows::Forms::Button());
			this->buttonSubtitlesFile = (gcnew System::Windows::Forms::Button());
			this->openFileDialogSubtitlesFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->scrollbarSubtitlesBorderSize = (gcnew System::Windows::Forms::HScrollBar());
			this->labelSubtitlesBorderSize = (gcnew System::Windows::Forms::Label());
			this->textboxSubtitlesBorderSize = (gcnew System::Windows::Forms::TextBox());
			this->textboxMovieName = (gcnew System::Windows::Forms::TextBox());
			this->labelMovieName = (gcnew System::Windows::Forms::Label());
			this->textboxSubtitlesLanguage = (gcnew System::Windows::Forms::TextBox());
			this->labelSubtitlesLanguage = (gcnew System::Windows::Forms::Label());
			this->comboboxMovieFrameRate = (gcnew System::Windows::Forms::ComboBox());
			this->labelMovieFrameRate = (gcnew System::Windows::Forms::Label());
			this->textboxScaleFactorForDepth = (gcnew System::Windows::Forms::TextBox());
			this->scrollbarScaleFactorForDepth = (gcnew System::Windows::Forms::HScrollBar());
			this->labelScaleFactorForDepth = (gcnew System::Windows::Forms::Label());
			this->textboxShiftFactorForDepth = (gcnew System::Windows::Forms::TextBox());
			this->scrollbarShiftFactorForDepth = (gcnew System::Windows::Forms::HScrollBar());
			this->labelShiftFactorForDepth = (gcnew System::Windows::Forms::Label());
			this->labelSubtitlesType = (gcnew System::Windows::Forms::Label());
			this->comboboxSubtitlesType = (gcnew System::Windows::Forms::ComboBox());
			this->groupboxSubtitlesFont = (gcnew System::Windows::Forms::GroupBox());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openSequenceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripComboboxProgramTest = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->groupboxMovieInfo = (gcnew System::Windows::Forms::GroupBox());
			this->textboxSubtitleFileName = (gcnew System::Windows::Forms::TextBox());
			this->groupboxDepthFactors = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonSettingsUseDefault = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupboxBlockMatchAnalysis->SuspendLayout();
			this->groupboxMaskOperations->SuspendLayout();
			this->groupboxPrecomputingOperations->SuspendLayout();
			this->groupboxSubtitlesFont->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupboxMovieInfo->SuspendLayout();
			this->groupboxDepthFactors->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkboxPauseComputing
			// 
			this->checkboxPauseComputing->AutoSize = true;
			this->checkboxPauseComputing->Checked = true;
			this->checkboxPauseComputing->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkboxPauseComputing->Location = System::Drawing::Point(712, 637);
			this->checkboxPauseComputing->Name = L"checkboxPauseComputing";
			this->checkboxPauseComputing->Size = System::Drawing::Size(108, 17);
			this->checkboxPauseComputing->TabIndex = 57;
			this->checkboxPauseComputing->Text = L"Pause computing";
			this->checkboxPauseComputing->UseVisualStyleBackColor = true;
			// 
			// groupboxBlockMatchAnalysis
			// 
			this->groupboxBlockMatchAnalysis->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupboxBlockMatchAnalysis->Controls->Add(this->textboxMinDisparity);
			this->groupboxBlockMatchAnalysis->Controls->Add(this->textboxSearchLenghtDisparity);
			this->groupboxBlockMatchAnalysis->Controls->Add(this->textboxBlockSize);
			this->groupboxBlockMatchAnalysis->Controls->Add(this->labelSearchLenghtDisparity);
			this->groupboxBlockMatchAnalysis->Controls->Add(this->labelMaxRange);
			this->groupboxBlockMatchAnalysis->Controls->Add(this->labelBlockSize);
			this->groupboxBlockMatchAnalysis->Controls->Add(this->scrollbarSearchLenghtDisparity);
			this->groupboxBlockMatchAnalysis->Controls->Add(this->scrollbarMinDisparity);
			this->groupboxBlockMatchAnalysis->Controls->Add(this->scrollbarBlockSize);
			this->groupboxBlockMatchAnalysis->Location = System::Drawing::Point(247, 27);
			this->groupboxBlockMatchAnalysis->Name = L"groupboxBlockMatchAnalysis";
			this->groupboxBlockMatchAnalysis->Size = System::Drawing::Size(216, 142);
			this->groupboxBlockMatchAnalysis->TabIndex = 56;
			this->groupboxBlockMatchAnalysis->TabStop = false;
			this->groupboxBlockMatchAnalysis->Text = L"Block match analysis";
			// 
			// textboxMinDisparity
			// 
			this->textboxMinDisparity->Location = System::Drawing::Point(172, 73);
			this->textboxMinDisparity->Name = L"textboxMinDisparity";
			this->textboxMinDisparity->ReadOnly = true;
			this->textboxMinDisparity->Size = System::Drawing::Size(33, 20);
			this->textboxMinDisparity->TabIndex = 10;
			this->textboxMinDisparity->Text = L"0";
			// 
			// textboxSearchLenghtDisparity
			// 
			this->textboxSearchLenghtDisparity->Location = System::Drawing::Point(172, 114);
			this->textboxSearchLenghtDisparity->Name = L"textboxSearchLenghtDisparity";
			this->textboxSearchLenghtDisparity->ReadOnly = true;
			this->textboxSearchLenghtDisparity->Size = System::Drawing::Size(33, 20);
			this->textboxSearchLenghtDisparity->TabIndex = 9;
			this->textboxSearchLenghtDisparity->Text = L"32";
			// 
			// textboxBlockSize
			// 
			this->textboxBlockSize->Location = System::Drawing::Point(172, 29);
			this->textboxBlockSize->Name = L"textboxBlockSize";
			this->textboxBlockSize->ReadOnly = true;
			this->textboxBlockSize->Size = System::Drawing::Size(33, 20);
			this->textboxBlockSize->TabIndex = 8;
			this->textboxBlockSize->Text = L"47";
			// 
			// labelSearchLenghtDisparity
			// 
			this->labelSearchLenghtDisparity->AutoSize = true;
			this->labelSearchLenghtDisparity->Location = System::Drawing::Point(7, 101);
			this->labelSearchLenghtDisparity->Name = L"labelSearchLenghtDisparity";
			this->labelSearchLenghtDisparity->Size = System::Drawing::Size(190, 13);
			this->labelSearchLenghtDisparity->TabIndex = 6;
			this->labelSearchLenghtDisparity->Text = L"Search lenght disparity [pix] (zero = full)";
			// 
			// labelMaxRange
			// 
			this->labelMaxRange->AutoSize = true;
			this->labelMaxRange->Location = System::Drawing::Point(10, 59);
			this->labelMaxRange->Name = L"labelMaxRange";
			this->labelMaxRange->Size = System::Drawing::Size(87, 13);
			this->labelMaxRange->TabIndex = 5;
			this->labelMaxRange->Text = L"Min disparity [pix]";
			// 
			// labelBlockSize
			// 
			this->labelBlockSize->AutoSize = true;
			this->labelBlockSize->Location = System::Drawing::Point(7, 16);
			this->labelBlockSize->Name = L"labelBlockSize";
			this->labelBlockSize->Size = System::Drawing::Size(83, 13);
			this->labelBlockSize->TabIndex = 4;
			this->labelBlockSize->Text = L"Block size (BxB)";
			// 
			// scrollbarSearchLenghtDisparity
			// 
			this->scrollbarSearchLenghtDisparity->LargeChange = 16;
			this->scrollbarSearchLenghtDisparity->Location = System::Drawing::Point(10, 114);
			this->scrollbarSearchLenghtDisparity->Maximum = 256;
			this->scrollbarSearchLenghtDisparity->Name = L"scrollbarSearchLenghtDisparity";
			this->scrollbarSearchLenghtDisparity->Size = System::Drawing::Size(159, 20);
			this->scrollbarSearchLenghtDisparity->SmallChange = 16;
			this->scrollbarSearchLenghtDisparity->TabIndex = 3;
			this->scrollbarSearchLenghtDisparity->Value = 32;
			this->scrollbarSearchLenghtDisparity->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarSearchLenghtDisparity_ValueChanged);
			// 
			// scrollbarMinDisparity
			// 
			this->scrollbarMinDisparity->LargeChange = 4;
			this->scrollbarMinDisparity->Location = System::Drawing::Point(10, 73);
			this->scrollbarMinDisparity->Maximum = 32;
			this->scrollbarMinDisparity->Name = L"scrollbarMinDisparity";
			this->scrollbarMinDisparity->Size = System::Drawing::Size(159, 20);
			this->scrollbarMinDisparity->TabIndex = 2;
			this->scrollbarMinDisparity->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarMinDisparity_ValueChanged);
			// 
			// scrollbarBlockSize
			// 
			this->scrollbarBlockSize->LargeChange = 4;
			this->scrollbarBlockSize->Location = System::Drawing::Point(10, 29);
			this->scrollbarBlockSize->Maximum = 101;
			this->scrollbarBlockSize->Minimum = 5;
			this->scrollbarBlockSize->Name = L"scrollbarBlockSize";
			this->scrollbarBlockSize->Size = System::Drawing::Size(159, 20);
			this->scrollbarBlockSize->SmallChange = 2;
			this->scrollbarBlockSize->TabIndex = 1;
			this->scrollbarBlockSize->Value = 47;
			this->scrollbarBlockSize->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarBlockSize_ValueChanged);
			// 
			// groupboxMaskOperations
			// 
			this->groupboxMaskOperations->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupboxMaskOperations->Controls->Add(this->textboxSpeckleRange);
			this->groupboxMaskOperations->Controls->Add(this->scrollbarSpeckleRange);
			this->groupboxMaskOperations->Controls->Add(this->labelSpeckleRange);
			this->groupboxMaskOperations->Controls->Add(this->textboxSpeckleWindowSize);
			this->groupboxMaskOperations->Controls->Add(this->scrollbarSpeckleWindowSize);
			this->groupboxMaskOperations->Controls->Add(this->labelSpeckleWindowSize);
			this->groupboxMaskOperations->Controls->Add(this->textboxUniquenessRatio);
			this->groupboxMaskOperations->Controls->Add(this->scrollbarUniquenessRatio);
			this->groupboxMaskOperations->Controls->Add(this->textboxTextureThreshold);
			this->groupboxMaskOperations->Controls->Add(this->labelUniquenessRatio);
			this->groupboxMaskOperations->Controls->Add(this->scrollbarTextureThreshold);
			this->groupboxMaskOperations->Controls->Add(this->labelTextureThreshold);
			this->groupboxMaskOperations->Location = System::Drawing::Point(469, 29);
			this->groupboxMaskOperations->Name = L"groupboxMaskOperations";
			this->groupboxMaskOperations->Size = System::Drawing::Size(225, 178);
			this->groupboxMaskOperations->TabIndex = 55;
			this->groupboxMaskOperations->TabStop = false;
			this->groupboxMaskOperations->Text = L"Postcomputing operations";
			// 
			// textboxSpeckleRange
			// 
			this->textboxSpeckleRange->Location = System::Drawing::Point(176, 155);
			this->textboxSpeckleRange->Name = L"textboxSpeckleRange";
			this->textboxSpeckleRange->ReadOnly = true;
			this->textboxSpeckleRange->Size = System::Drawing::Size(33, 20);
			this->textboxSpeckleRange->TabIndex = 39;
			this->textboxSpeckleRange->Text = L"47";
			// 
			// scrollbarSpeckleRange
			// 
			this->scrollbarSpeckleRange->LargeChange = 2;
			this->scrollbarSpeckleRange->Location = System::Drawing::Point(14, 155);
			this->scrollbarSpeckleRange->Maximum = 202;
			this->scrollbarSpeckleRange->Name = L"scrollbarSpeckleRange";
			this->scrollbarSpeckleRange->Size = System::Drawing::Size(159, 20);
			this->scrollbarSpeckleRange->SmallChange = 2;
			this->scrollbarSpeckleRange->TabIndex = 38;
			this->scrollbarSpeckleRange->Value = 47;
			this->scrollbarSpeckleRange->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarSpeckleRange_ValueChanged);
			// 
			// labelSpeckleRange
			// 
			this->labelSpeckleRange->AutoSize = true;
			this->labelSpeckleRange->Location = System::Drawing::Point(11, 142);
			this->labelSpeckleRange->Name = L"labelSpeckleRange";
			this->labelSpeckleRange->Size = System::Drawing::Size(76, 13);
			this->labelSpeckleRange->TabIndex = 37;
			this->labelSpeckleRange->Text = L"Speckle range";
			// 
			// textboxSpeckleWindowSize
			// 
			this->textboxSpeckleWindowSize->Location = System::Drawing::Point(176, 112);
			this->textboxSpeckleWindowSize->Name = L"textboxSpeckleWindowSize";
			this->textboxSpeckleWindowSize->ReadOnly = true;
			this->textboxSpeckleWindowSize->Size = System::Drawing::Size(33, 20);
			this->textboxSpeckleWindowSize->TabIndex = 36;
			this->textboxSpeckleWindowSize->Text = L"47";
			// 
			// scrollbarSpeckleWindowSize
			// 
			this->scrollbarSpeckleWindowSize->LargeChange = 4;
			this->scrollbarSpeckleWindowSize->Location = System::Drawing::Point(14, 112);
			this->scrollbarSpeckleWindowSize->Maximum = 202;
			this->scrollbarSpeckleWindowSize->Name = L"scrollbarSpeckleWindowSize";
			this->scrollbarSpeckleWindowSize->Size = System::Drawing::Size(159, 20);
			this->scrollbarSpeckleWindowSize->SmallChange = 2;
			this->scrollbarSpeckleWindowSize->TabIndex = 35;
			this->scrollbarSpeckleWindowSize->Value = 47;
			this->scrollbarSpeckleWindowSize->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarSpeckleWindowSize_ValueChanged);
			// 
			// labelSpeckleWindowSize
			// 
			this->labelSpeckleWindowSize->AutoSize = true;
			this->labelSpeckleWindowSize->Location = System::Drawing::Point(11, 99);
			this->labelSpeckleWindowSize->Name = L"labelSpeckleWindowSize";
			this->labelSpeckleWindowSize->Size = System::Drawing::Size(142, 13);
			this->labelSpeckleWindowSize->TabIndex = 34;
			this->labelSpeckleWindowSize->Text = L"Speckle window size (WxW)";
			// 
			// textboxUniquenessRatio
			// 
			this->textboxUniquenessRatio->Location = System::Drawing::Point(176, 70);
			this->textboxUniquenessRatio->Name = L"textboxUniquenessRatio";
			this->textboxUniquenessRatio->ReadOnly = true;
			this->textboxUniquenessRatio->Size = System::Drawing::Size(33, 20);
			this->textboxUniquenessRatio->TabIndex = 33;
			this->textboxUniquenessRatio->Text = L"58";
			// 
			// scrollbarUniquenessRatio
			// 
			this->scrollbarUniquenessRatio->LargeChange = 2;
			this->scrollbarUniquenessRatio->Location = System::Drawing::Point(14, 70);
			this->scrollbarUniquenessRatio->Maximum = 202;
			this->scrollbarUniquenessRatio->Minimum = 3;
			this->scrollbarUniquenessRatio->Name = L"scrollbarUniquenessRatio";
			this->scrollbarUniquenessRatio->Size = System::Drawing::Size(159, 20);
			this->scrollbarUniquenessRatio->SmallChange = 2;
			this->scrollbarUniquenessRatio->TabIndex = 32;
			this->scrollbarUniquenessRatio->Value = 58;
			this->scrollbarUniquenessRatio->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarUniquenessRatio_ValueChanged);
			// 
			// textboxTextureThreshold
			// 
			this->textboxTextureThreshold->Location = System::Drawing::Point(176, 29);
			this->textboxTextureThreshold->Name = L"textboxTextureThreshold";
			this->textboxTextureThreshold->ReadOnly = true;
			this->textboxTextureThreshold->Size = System::Drawing::Size(33, 20);
			this->textboxTextureThreshold->TabIndex = 24;
			this->textboxTextureThreshold->Text = L"32";
			// 
			// labelUniquenessRatio
			// 
			this->labelUniquenessRatio->AutoSize = true;
			this->labelUniquenessRatio->Location = System::Drawing::Point(11, 57);
			this->labelUniquenessRatio->Name = L"labelUniquenessRatio";
			this->labelUniquenessRatio->Size = System::Drawing::Size(86, 13);
			this->labelUniquenessRatio->TabIndex = 31;
			this->labelUniquenessRatio->Text = L"Uniqueness ratio";
			// 
			// scrollbarTextureThreshold
			// 
			this->scrollbarTextureThreshold->LargeChange = 2;
			this->scrollbarTextureThreshold->Location = System::Drawing::Point(14, 29);
			this->scrollbarTextureThreshold->Maximum = 64;
			this->scrollbarTextureThreshold->Name = L"scrollbarTextureThreshold";
			this->scrollbarTextureThreshold->Size = System::Drawing::Size(159, 20);
			this->scrollbarTextureThreshold->TabIndex = 23;
			this->scrollbarTextureThreshold->Value = 32;
			this->scrollbarTextureThreshold->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarTextureThreshold_ValueChanged);
			// 
			// labelTextureThreshold
			// 
			this->labelTextureThreshold->AutoSize = true;
			this->labelTextureThreshold->Location = System::Drawing::Point(11, 15);
			this->labelTextureThreshold->Name = L"labelTextureThreshold";
			this->labelTextureThreshold->Size = System::Drawing::Size(89, 13);
			this->labelTextureThreshold->TabIndex = 22;
			this->labelTextureThreshold->Text = L"Texture threshold";
			// 
			// groupboxPrecomputingOperations
			// 
			this->groupboxPrecomputingOperations->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupboxPrecomputingOperations->Controls->Add(this->textboxPrefilterIntensitySize);
			this->groupboxPrecomputingOperations->Controls->Add(this->checkboxGaussianBlur);
			this->groupboxPrecomputingOperations->Controls->Add(this->checkboxMedian);
			this->groupboxPrecomputingOperations->Controls->Add(this->labelPrefilterIntensitySize);
			this->groupboxPrecomputingOperations->Controls->Add(this->textboxFilterSize);
			this->groupboxPrecomputingOperations->Controls->Add(this->labelFilterSize);
			this->groupboxPrecomputingOperations->Controls->Add(this->scrollbarPrefilterIntensitySize);
			this->groupboxPrecomputingOperations->Controls->Add(this->textboxTimesToHalfsize);
			this->groupboxPrecomputingOperations->Controls->Add(this->scrollbarFilterSize);
			this->groupboxPrecomputingOperations->Controls->Add(this->labelTimesToHalfsize);
			this->groupboxPrecomputingOperations->Controls->Add(this->scrollbarTimesToHalfsize);
			this->groupboxPrecomputingOperations->Location = System::Drawing::Point(12, 29);
			this->groupboxPrecomputingOperations->Name = L"groupboxPrecomputingOperations";
			this->groupboxPrecomputingOperations->Size = System::Drawing::Size(229, 219);
			this->groupboxPrecomputingOperations->TabIndex = 54;
			this->groupboxPrecomputingOperations->TabStop = false;
			this->groupboxPrecomputingOperations->Text = L"Precomputing image operations";
			// 
			// textboxPrefilterIntensitySize
			// 
			this->textboxPrefilterIntensitySize->Location = System::Drawing::Point(185, 70);
			this->textboxPrefilterIntensitySize->Name = L"textboxPrefilterIntensitySize";
			this->textboxPrefilterIntensitySize->ReadOnly = true;
			this->textboxPrefilterIntensitySize->Size = System::Drawing::Size(33, 20);
			this->textboxPrefilterIntensitySize->TabIndex = 39;
			this->textboxPrefilterIntensitySize->Text = L"7";
			// 
			// checkboxGaussianBlur
			// 
			this->checkboxGaussianBlur->AutoSize = true;
			this->checkboxGaussianBlur->Location = System::Drawing::Point(13, 163);
			this->checkboxGaussianBlur->Name = L"checkboxGaussianBlur";
			this->checkboxGaussianBlur->Size = System::Drawing::Size(112, 17);
			this->checkboxGaussianBlur->TabIndex = 36;
			this->checkboxGaussianBlur->Text = L"Gaussian blur filter";
			this->checkboxGaussianBlur->UseVisualStyleBackColor = true;
			this->checkboxGaussianBlur->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkboxGaussianBlur_CheckedChanged);
			// 
			// checkboxMedian
			// 
			this->checkboxMedian->AutoSize = true;
			this->checkboxMedian->Checked = true;
			this->checkboxMedian->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkboxMedian->Location = System::Drawing::Point(13, 186);
			this->checkboxMedian->Name = L"checkboxMedian";
			this->checkboxMedian->Size = System::Drawing::Size(83, 17);
			this->checkboxMedian->TabIndex = 35;
			this->checkboxMedian->Text = L"Median filter";
			this->checkboxMedian->UseVisualStyleBackColor = true;
			this->checkboxMedian->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkboxMedian_CheckedChanged);
			// 
			// labelPrefilterIntensitySize
			// 
			this->labelPrefilterIntensitySize->AutoSize = true;
			this->labelPrefilterIntensitySize->Location = System::Drawing::Point(10, 57);
			this->labelPrefilterIntensitySize->Name = L"labelPrefilterIntensitySize";
			this->labelPrefilterIntensitySize->Size = System::Drawing::Size(130, 13);
			this->labelPrefilterIntensitySize->TabIndex = 37;
			this->labelPrefilterIntensitySize->Text = L"Prefilter intensity size (FxF)";
			// 
			// textboxFilterSize
			// 
			this->textboxFilterSize->Location = System::Drawing::Point(185, 140);
			this->textboxFilterSize->Name = L"textboxFilterSize";
			this->textboxFilterSize->ReadOnly = true;
			this->textboxFilterSize->Size = System::Drawing::Size(33, 20);
			this->textboxFilterSize->TabIndex = 30;
			this->textboxFilterSize->Text = L"3";
			// 
			// labelFilterSize
			// 
			this->labelFilterSize->AutoSize = true;
			this->labelFilterSize->Location = System::Drawing::Point(10, 127);
			this->labelFilterSize->Name = L"labelFilterSize";
			this->labelFilterSize->Size = System::Drawing::Size(76, 13);
			this->labelFilterSize->TabIndex = 28;
			this->labelFilterSize->Text = L"Filter size (FxF)";
			// 
			// scrollbarPrefilterIntensitySize
			// 
			this->scrollbarPrefilterIntensitySize->LargeChange = 4;
			this->scrollbarPrefilterIntensitySize->Location = System::Drawing::Point(13, 70);
			this->scrollbarPrefilterIntensitySize->Maximum = 22;
			this->scrollbarPrefilterIntensitySize->Minimum = 5;
			this->scrollbarPrefilterIntensitySize->Name = L"scrollbarPrefilterIntensitySize";
			this->scrollbarPrefilterIntensitySize->Size = System::Drawing::Size(159, 20);
			this->scrollbarPrefilterIntensitySize->SmallChange = 2;
			this->scrollbarPrefilterIntensitySize->TabIndex = 38;
			this->scrollbarPrefilterIntensitySize->Value = 7;
			this->scrollbarPrefilterIntensitySize->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarPrefilterIntensitySize_ValueChanged);
			// 
			// textboxTimesToHalfsize
			// 
			this->textboxTimesToHalfsize->Location = System::Drawing::Point(185, 28);
			this->textboxTimesToHalfsize->Name = L"textboxTimesToHalfsize";
			this->textboxTimesToHalfsize->ReadOnly = true;
			this->textboxTimesToHalfsize->Size = System::Drawing::Size(33, 20);
			this->textboxTimesToHalfsize->TabIndex = 27;
			this->textboxTimesToHalfsize->Text = L"1";
			// 
			// scrollbarFilterSize
			// 
			this->scrollbarFilterSize->LargeChange = 4;
			this->scrollbarFilterSize->Location = System::Drawing::Point(13, 140);
			this->scrollbarFilterSize->Maximum = 22;
			this->scrollbarFilterSize->Minimum = 1;
			this->scrollbarFilterSize->Name = L"scrollbarFilterSize";
			this->scrollbarFilterSize->Size = System::Drawing::Size(159, 20);
			this->scrollbarFilterSize->SmallChange = 2;
			this->scrollbarFilterSize->TabIndex = 29;
			this->scrollbarFilterSize->Value = 3;
			this->scrollbarFilterSize->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarFilterSize_ValueChanged);
			// 
			// labelTimesToHalfsize
			// 
			this->labelTimesToHalfsize->AutoSize = true;
			this->labelTimesToHalfsize->Location = System::Drawing::Point(10, 15);
			this->labelTimesToHalfsize->Name = L"labelTimesToHalfsize";
			this->labelTimesToHalfsize->Size = System::Drawing::Size(152, 13);
			this->labelTimesToHalfsize->TabIndex = 25;
			this->labelTimesToHalfsize->Text = L"Downsampling image \"x\" times";
			// 
			// scrollbarTimesToHalfsize
			// 
			this->scrollbarTimesToHalfsize->LargeChange = 2;
			this->scrollbarTimesToHalfsize->Location = System::Drawing::Point(13, 28);
			this->scrollbarTimesToHalfsize->Maximum = 8;
			this->scrollbarTimesToHalfsize->Minimum = 1;
			this->scrollbarTimesToHalfsize->Name = L"scrollbarTimesToHalfsize";
			this->scrollbarTimesToHalfsize->Size = System::Drawing::Size(159, 20);
			this->scrollbarTimesToHalfsize->TabIndex = 26;
			this->scrollbarTimesToHalfsize->Value = 1;
			this->scrollbarTimesToHalfsize->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarTimesToHalfsize_ValueChanged);
			// 
			// checkboxPreview
			// 
			this->checkboxPreview->AutoSize = true;
			this->checkboxPreview->Location = System::Drawing::Point(911, 165);
			this->checkboxPreview->Name = L"checkboxPreview";
			this->checkboxPreview->Size = System::Drawing::Size(114, 17);
			this->checkboxPreview->TabIndex = 52;
			this->checkboxPreview->Text = L"Preview (for setup)";
			this->checkboxPreview->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(376, 625);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(330, 38);
			this->progressBar1->Step = 2;
			this->progressBar1->TabIndex = 51;
			// 
			// labelShowWindows
			// 
			this->labelShowWindows->AutoSize = true;
			this->labelShowWindows->Location = System::Drawing::Point(908, 29);
			this->labelShowWindows->Name = L"labelShowWindows";
			this->labelShowWindows->Size = System::Drawing::Size(168, 13);
			this->labelShowWindows->TabIndex = 50;
			this->labelShowWindows->Text = L"Show windows (when computing):";
			// 
			// checkboxStereoRight
			// 
			this->checkboxStereoRight->AutoSize = true;
			this->checkboxStereoRight->Checked = true;
			this->checkboxStereoRight->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkboxStereoRight->Location = System::Drawing::Point(911, 68);
			this->checkboxStereoRight->Name = L"checkboxStereoRight";
			this->checkboxStereoRight->Size = System::Drawing::Size(85, 17);
			this->checkboxStereoRight->TabIndex = 47;
			this->checkboxStereoRight->Text = L"Stereo Right";
			this->checkboxStereoRight->UseVisualStyleBackColor = true;
			this->checkboxStereoRight->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkboxStereoRight_CheckedChanged);
			// 
			// checkboxStereoLeft
			// 
			this->checkboxStereoLeft->AutoSize = true;
			this->checkboxStereoLeft->Checked = true;
			this->checkboxStereoLeft->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkboxStereoLeft->Location = System::Drawing::Point(911, 45);
			this->checkboxStereoLeft->Name = L"checkboxStereoLeft";
			this->checkboxStereoLeft->Size = System::Drawing::Size(78, 17);
			this->checkboxStereoLeft->TabIndex = 46;
			this->checkboxStereoLeft->Text = L"Stereo Left";
			this->checkboxStereoLeft->UseVisualStyleBackColor = true;
			this->checkboxStereoLeft->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkboxStereoLeft_CheckedChanged);
			// 
			// buttonOpenSequence
			// 
			this->buttonOpenSequence->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonOpenSequence->Location = System::Drawing::Point(12, 321);
			this->buttonOpenSequence->Name = L"buttonOpenSequence";
			this->buttonOpenSequence->Size = System::Drawing::Size(172, 38);
			this->buttonOpenSequence->TabIndex = 45;
			this->buttonOpenSequence->Text = L"Open sequence LEFT\r\n(mark only IN and OUT - 2 files)";
			this->buttonOpenSequence->UseVisualStyleBackColor = false;
			this->buttonOpenSequence->Click += gcnew System::EventHandler(this, &Form1::buttonOpenSequence_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 365);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(528, 197);
			this->textBox1->TabIndex = 44;
			this->textBox1->Text = L"Left sequence";
			// 
			// butStart
			// 
			this->butStart->Location = System::Drawing::Point(826, 624);
			this->butStart->Name = L"butStart";
			this->butStart->Size = System::Drawing::Size(101, 38);
			this->butStart->TabIndex = 42;
			this->butStart->Text = L"Start";
			this->butStart->UseVisualStyleBackColor = true;
			this->butStart->Click += gcnew System::EventHandler(this, &Form1::butStart_Click);
			// 
			// checkboxDisparityMap
			// 
			this->checkboxDisparityMap->AutoSize = true;
			this->checkboxDisparityMap->Checked = true;
			this->checkboxDisparityMap->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkboxDisparityMap->Location = System::Drawing::Point(911, 91);
			this->checkboxDisparityMap->Name = L"checkboxDisparityMap";
			this->checkboxDisparityMap->Size = System::Drawing::Size(137, 17);
			this->checkboxDisparityMap->TabIndex = 58;
			this->checkboxDisparityMap->Text = L"Distance map ( \'depth\' )";
			this->checkboxDisparityMap->UseVisualStyleBackColor = true;
			this->checkboxDisparityMap->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkboxDisparityMap_CheckedChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"All files|*.*|DPX|*.dpx|PNG|*.png|JPG|*.jpg";
			this->openFileDialog1->Multiselect = true;
			this->openFileDialog1->Title = L"Left sequence";
			// 
			// textboxRight
			// 
			this->textboxRight->Location = System::Drawing::Point(546, 365);
			this->textboxRight->Multiline = true;
			this->textboxRight->Name = L"textboxRight";
			this->textboxRight->ReadOnly = true;
			this->textboxRight->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textboxRight->Size = System::Drawing::Size(525, 197);
			this->textboxRight->TabIndex = 59;
			this->textboxRight->Text = L"Right sequence";
			// 
			// buttonOpenSequenceRight
			// 
			this->buttonOpenSequenceRight->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonOpenSequenceRight->Location = System::Drawing::Point(899, 321);
			this->buttonOpenSequenceRight->Name = L"buttonOpenSequenceRight";
			this->buttonOpenSequenceRight->Size = System::Drawing::Size(172, 38);
			this->buttonOpenSequenceRight->TabIndex = 60;
			this->buttonOpenSequenceRight->Text = L"Open sequence RIGHT\r\n(mark only IN and OUT - 2 files)";
			this->buttonOpenSequenceRight->UseVisualStyleBackColor = false;
			this->buttonOpenSequenceRight->Click += gcnew System::EventHandler(this, &Form1::buttonOpenSequenceRight_Click);
			// 
			// openFileDialogRight
			// 
			this->openFileDialogRight->Filter = L"All files|*.*|DPX|*.dpx|PNG|*.png|JPG|*.jpg";
			this->openFileDialogRight->Multiselect = true;
			this->openFileDialogRight->Title = L"Right sequence";
			// 
			// buttonSaveToFolder
			// 
			this->buttonSaveToFolder->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonSaveToFolder->Location = System::Drawing::Point(262, 625);
			this->buttonSaveToFolder->Name = L"buttonSaveToFolder";
			this->buttonSaveToFolder->Size = System::Drawing::Size(108, 38);
			this->buttonSaveToFolder->TabIndex = 64;
			this->buttonSaveToFolder->Text = L"Save to folder";
			this->buttonSaveToFolder->UseVisualStyleBackColor = false;
			this->buttonSaveToFolder->Click += gcnew System::EventHandler(this, &Form1::buttonSaveToFolder_Click);
			// 
			// textboxSaveToFolder
			// 
			this->textboxSaveToFolder->Location = System::Drawing::Point(12, 599);
			this->textboxSaveToFolder->Name = L"textboxSaveToFolder";
			this->textboxSaveToFolder->ReadOnly = true;
			this->textboxSaveToFolder->Size = System::Drawing::Size(1059, 20);
			this->textboxSaveToFolder->TabIndex = 65;
			this->textboxSaveToFolder->Text = L"Save folder directory";
			// 
			// labelResultsSaveTo
			// 
			this->labelResultsSaveTo->AutoSize = true;
			this->labelResultsSaveTo->Location = System::Drawing::Point(12, 583);
			this->labelResultsSaveTo->Name = L"labelResultsSaveTo";
			this->labelResultsSaveTo->Size = System::Drawing::Size(83, 13);
			this->labelResultsSaveTo->TabIndex = 47;
			this->labelResultsSaveTo->Text = L"Results save to:";
			// 
			// fontDialog1
			// 
			this->fontDialog1->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->fontDialog1->ShowColor = true;
			this->fontDialog1->ShowEffects = false;
			// 
			// buttonFont
			// 
			this->buttonFont->Location = System::Drawing::Point(10, 35);
			this->buttonFont->Name = L"buttonFont";
			this->buttonFont->Size = System::Drawing::Size(84, 38);
			this->buttonFont->TabIndex = 75;
			this->buttonFont->Text = L"Subtitles font";
			this->buttonFont->UseVisualStyleBackColor = true;
			this->buttonFont->Click += gcnew System::EventHandler(this, &Form1::buttonFont_Click);
			// 
			// buttonSubtitlesFile
			// 
			this->buttonSubtitlesFile->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonSubtitlesFile->Location = System::Drawing::Point(500, 295);
			this->buttonSubtitlesFile->Name = L"buttonSubtitlesFile";
			this->buttonSubtitlesFile->Size = System::Drawing::Size(84, 38);
			this->buttonSubtitlesFile->TabIndex = 76;
			this->buttonSubtitlesFile->Text = L"Subtitles file";
			this->buttonSubtitlesFile->UseVisualStyleBackColor = false;
			this->buttonSubtitlesFile->Click += gcnew System::EventHandler(this, &Form1::buttonSubtitlesFile_Click);
			// 
			// openFileDialogSubtitlesFile
			// 
			this->openFileDialogSubtitlesFile->FileName = L" ";
			// 
			// scrollbarSubtitlesBorderSize
			// 
			this->scrollbarSubtitlesBorderSize->LargeChange = 2;
			this->scrollbarSubtitlesBorderSize->Location = System::Drawing::Point(97, 37);
			this->scrollbarSubtitlesBorderSize->Maximum = 4;
			this->scrollbarSubtitlesBorderSize->Name = L"scrollbarSubtitlesBorderSize";
			this->scrollbarSubtitlesBorderSize->Size = System::Drawing::Size(112, 20);
			this->scrollbarSubtitlesBorderSize->TabIndex = 3;
			this->scrollbarSubtitlesBorderSize->Value = 2;
			this->scrollbarSubtitlesBorderSize->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarSubtitlesBorderSize_ValueChanged);
			// 
			// labelSubtitlesBorderSize
			// 
			this->labelSubtitlesBorderSize->AutoSize = true;
			this->labelSubtitlesBorderSize->Location = System::Drawing::Point(98, 23);
			this->labelSubtitlesBorderSize->Name = L"labelSubtitlesBorderSize";
			this->labelSubtitlesBorderSize->Size = System::Drawing::Size(104, 13);
			this->labelSubtitlesBorderSize->TabIndex = 77;
			this->labelSubtitlesBorderSize->Text = L"Subtitles border size:";
			// 
			// textboxSubtitlesBorderSize
			// 
			this->textboxSubtitlesBorderSize->Location = System::Drawing::Point(114, 59);
			this->textboxSubtitlesBorderSize->Name = L"textboxSubtitlesBorderSize";
			this->textboxSubtitlesBorderSize->ReadOnly = true;
			this->textboxSubtitlesBorderSize->Size = System::Drawing::Size(80, 20);
			this->textboxSubtitlesBorderSize->TabIndex = 79;
			this->textboxSubtitlesBorderSize->Text = L"MEDIUM";
			this->textboxSubtitlesBorderSize->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textboxMovieName
			// 
			this->textboxMovieName->Location = System::Drawing::Point(9, 36);
			this->textboxMovieName->Name = L"textboxMovieName";
			this->textboxMovieName->Size = System::Drawing::Size(158, 20);
			this->textboxMovieName->TabIndex = 81;
			this->textboxMovieName->Text = L"MovieName";
			this->textboxMovieName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textboxMovieName->TextChanged += gcnew System::EventHandler(this, &Form1::textboxMovieName_TextChanged);
			// 
			// labelMovieName
			// 
			this->labelMovieName->AutoSize = true;
			this->labelMovieName->Location = System::Drawing::Point(6, 20);
			this->labelMovieName->Name = L"labelMovieName";
			this->labelMovieName->Size = System::Drawing::Size(95, 13);
			this->labelMovieName->TabIndex = 80;
			this->labelMovieName->Text = L"Enter movie name:";
			// 
			// textboxSubtitlesLanguage
			// 
			this->textboxSubtitlesLanguage->Location = System::Drawing::Point(9, 82);
			this->textboxSubtitlesLanguage->Name = L"textboxSubtitlesLanguage";
			this->textboxSubtitlesLanguage->Size = System::Drawing::Size(158, 20);
			this->textboxSubtitlesLanguage->TabIndex = 83;
			this->textboxSubtitlesLanguage->Text = L"SubtitlesLanguage";
			this->textboxSubtitlesLanguage->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textboxSubtitlesLanguage->TextChanged += gcnew System::EventHandler(this, &Form1::textboxSubtitlesLanguage_TextChanged);
			// 
			// labelSubtitlesLanguage
			// 
			this->labelSubtitlesLanguage->AutoSize = true;
			this->labelSubtitlesLanguage->Location = System::Drawing::Point(6, 66);
			this->labelSubtitlesLanguage->Name = L"labelSubtitlesLanguage";
			this->labelSubtitlesLanguage->Size = System::Drawing::Size(123, 13);
			this->labelSubtitlesLanguage->TabIndex = 82;
			this->labelSubtitlesLanguage->Text = L"Enter subtitles language:";
			// 
			// comboboxMovieFrameRate
			// 
			this->comboboxMovieFrameRate->DisplayMember = L"25";
			this->comboboxMovieFrameRate->FormattingEnabled = true;
			this->comboboxMovieFrameRate->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"24", L"25", L"30"});
			this->comboboxMovieFrameRate->Location = System::Drawing::Point(9, 128);
			this->comboboxMovieFrameRate->Name = L"comboboxMovieFrameRate";
			this->comboboxMovieFrameRate->Size = System::Drawing::Size(86, 21);
			this->comboboxMovieFrameRate->TabIndex = 84;
			this->comboboxMovieFrameRate->Text = L"25";
			this->comboboxMovieFrameRate->TextChanged += gcnew System::EventHandler(this, &Form1::comboboxMovieFrameRate_TextChanged);
			// 
			// labelMovieFrameRate
			// 
			this->labelMovieFrameRate->AutoSize = true;
			this->labelMovieFrameRate->Location = System::Drawing::Point(6, 112);
			this->labelMovieFrameRate->Name = L"labelMovieFrameRate";
			this->labelMovieFrameRate->Size = System::Drawing::Size(89, 13);
			this->labelMovieFrameRate->TabIndex = 85;
			this->labelMovieFrameRate->Text = L"Movie frame rate:";
			// 
			// textboxScaleFactorForDepth
			// 
			this->textboxScaleFactorForDepth->Location = System::Drawing::Point(124, 29);
			this->textboxScaleFactorForDepth->Name = L"textboxScaleFactorForDepth";
			this->textboxScaleFactorForDepth->ReadOnly = true;
			this->textboxScaleFactorForDepth->Size = System::Drawing::Size(40, 20);
			this->textboxScaleFactorForDepth->TabIndex = 88;
			this->textboxScaleFactorForDepth->Text = L"1";
			this->textboxScaleFactorForDepth->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// scrollbarScaleFactorForDepth
			// 
			this->scrollbarScaleFactorForDepth->Location = System::Drawing::Point(9, 29);
			this->scrollbarScaleFactorForDepth->Maximum = 202;
			this->scrollbarScaleFactorForDepth->Name = L"scrollbarScaleFactorForDepth";
			this->scrollbarScaleFactorForDepth->Size = System::Drawing::Size(112, 20);
			this->scrollbarScaleFactorForDepth->TabIndex = 86;
			this->scrollbarScaleFactorForDepth->Value = 110;
			this->scrollbarScaleFactorForDepth->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarScaleFactorForDepth_ValueChanged);
			// 
			// labelScaleFactorForDepth
			// 
			this->labelScaleFactorForDepth->AutoSize = true;
			this->labelScaleFactorForDepth->Location = System::Drawing::Point(6, 16);
			this->labelScaleFactorForDepth->Name = L"labelScaleFactorForDepth";
			this->labelScaleFactorForDepth->Size = System::Drawing::Size(112, 13);
			this->labelScaleFactorForDepth->TabIndex = 87;
			this->labelScaleFactorForDepth->Text = L"Scale factor for depth:";
			// 
			// textboxShiftFactorForDepth
			// 
			this->textboxShiftFactorForDepth->Location = System::Drawing::Point(124, 74);
			this->textboxShiftFactorForDepth->Name = L"textboxShiftFactorForDepth";
			this->textboxShiftFactorForDepth->ReadOnly = true;
			this->textboxShiftFactorForDepth->Size = System::Drawing::Size(40, 20);
			this->textboxShiftFactorForDepth->TabIndex = 91;
			this->textboxShiftFactorForDepth->Text = L"0";
			this->textboxShiftFactorForDepth->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// scrollbarShiftFactorForDepth
			// 
			this->scrollbarShiftFactorForDepth->Location = System::Drawing::Point(9, 74);
			this->scrollbarShiftFactorForDepth->Maximum = 109;
			this->scrollbarShiftFactorForDepth->Name = L"scrollbarShiftFactorForDepth";
			this->scrollbarShiftFactorForDepth->Size = System::Drawing::Size(112, 20);
			this->scrollbarShiftFactorForDepth->TabIndex = 89;
			this->scrollbarShiftFactorForDepth->Value = 50;
			this->scrollbarShiftFactorForDepth->ValueChanged += gcnew System::EventHandler(this, &Form1::scrollbarShiftFactorForDepth_ValueChanged);
			// 
			// labelShiftFactorForDepth
			// 
			this->labelShiftFactorForDepth->AutoSize = true;
			this->labelShiftFactorForDepth->Location = System::Drawing::Point(6, 61);
			this->labelShiftFactorForDepth->Name = L"labelShiftFactorForDepth";
			this->labelShiftFactorForDepth->Size = System::Drawing::Size(106, 13);
			this->labelShiftFactorForDepth->TabIndex = 90;
			this->labelShiftFactorForDepth->Text = L"Shift factor for depth:";
			// 
			// labelSubtitlesType
			// 
			this->labelSubtitlesType->AutoSize = true;
			this->labelSubtitlesType->Location = System::Drawing::Point(933, 625);
			this->labelSubtitlesType->Name = L"labelSubtitlesType";
			this->labelSubtitlesType->Size = System::Drawing::Size(106, 13);
			this->labelSubtitlesType->TabIndex = 93;
			this->labelSubtitlesType->Text = L"Subtitles output type:";
			// 
			// comboboxSubtitlesType
			// 
			this->comboboxSubtitlesType->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->comboboxSubtitlesType->DisplayMember = L"25";
			this->comboboxSubtitlesType->FormattingEnabled = true;
			this->comboboxSubtitlesType->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Text in XML file", L"Images PNG + XML", 
				L"Draw subs into sequence"});
			this->comboboxSubtitlesType->Location = System::Drawing::Point(933, 641);
			this->comboboxSubtitlesType->Name = L"comboboxSubtitlesType";
			this->comboboxSubtitlesType->Size = System::Drawing::Size(138, 21);
			this->comboboxSubtitlesType->TabIndex = 92;
			this->comboboxSubtitlesType->Text = L"Text in XML file";
			this->comboboxSubtitlesType->TextChanged += gcnew System::EventHandler(this, &Form1::comboboxSubtitlesType_TextChanged);
			// 
			// groupboxSubtitlesFont
			// 
			this->groupboxSubtitlesFont->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupboxSubtitlesFont->Controls->Add(this->textboxSubtitlesBorderSize);
			this->groupboxSubtitlesFont->Controls->Add(this->labelSubtitlesBorderSize);
			this->groupboxSubtitlesFont->Controls->Add(this->buttonFont);
			this->groupboxSubtitlesFont->Controls->Add(this->scrollbarSubtitlesBorderSize);
			this->groupboxSubtitlesFont->Location = System::Drawing::Point(247, 175);
			this->groupboxSubtitlesFont->Name = L"groupboxSubtitlesFont";
			this->groupboxSubtitlesFont->Size = System::Drawing::Size(216, 96);
			this->groupboxSubtitlesFont->TabIndex = 94;
			this->groupboxSubtitlesFont->TabStop = false;
			this->groupboxSubtitlesFont->Text = L"Subtitles font";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->openSequenceToolStripMenuItem, 
				this->openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem, this->toolStripSeparator2, this->toolStripComboboxProgramTest, 
				this->toolStripSeparator1, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openSequenceToolStripMenuItem
			// 
			this->openSequenceToolStripMenuItem->Name = L"openSequenceToolStripMenuItem";
			this->openSequenceToolStripMenuItem->Size = System::Drawing::Size(363, 22);
			this->openSequenceToolStripMenuItem->Text = L"Open sequence LEFT (mark from IN to OUT - all files)";
			this->openSequenceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openSequenceToolStripMenuItem_Click);
			// 
			// openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem
			// 
			this->openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem->Name = L"openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem";
			this->openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem->Size = System::Drawing::Size(363, 22);
			this->openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem->Text = L"Open sequence RIGHT (mark from IN to OUT - all files)";
			this->openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(360, 6);
			// 
			// toolStripComboboxProgramTest
			// 
			this->toolStripComboboxProgramTest->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Test program ON", L"Test program OFF"});
			this->toolStripComboboxProgramTest->Name = L"toolStripComboboxProgramTest";
			this->toolStripComboboxProgramTest->Size = System::Drawing::Size(121, 23);
			this->toolStripComboboxProgramTest->Text = L"Test program OFF";
			this->toolStripComboboxProgramTest->TextChanged += gcnew System::EventHandler(this, &Form1::toolStripComboboxProgramTest_TextChanged);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(360, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(363, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(52, 20);
			this->toolStripMenuItem1->Text = L"About";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->toolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1083, 24);
			this->menuStrip1->TabIndex = 43;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// groupboxMovieInfo
			// 
			this->groupboxMovieInfo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupboxMovieInfo->Controls->Add(this->labelMovieName);
			this->groupboxMovieInfo->Controls->Add(this->textboxMovieName);
			this->groupboxMovieInfo->Controls->Add(this->labelSubtitlesLanguage);
			this->groupboxMovieInfo->Controls->Add(this->textboxSubtitlesLanguage);
			this->groupboxMovieInfo->Controls->Add(this->labelMovieFrameRate);
			this->groupboxMovieInfo->Controls->Add(this->comboboxMovieFrameRate);
			this->groupboxMovieInfo->Location = System::Drawing::Point(701, 29);
			this->groupboxMovieInfo->Name = L"groupboxMovieInfo";
			this->groupboxMovieInfo->Size = System::Drawing::Size(182, 175);
			this->groupboxMovieInfo->TabIndex = 95;
			this->groupboxMovieInfo->TabStop = false;
			this->groupboxMovieInfo->Text = L"Movie info";
			// 
			// textboxSubtitleFileName
			// 
			this->textboxSubtitleFileName->Location = System::Drawing::Point(197, 339);
			this->textboxSubtitleFileName->Name = L"textboxSubtitleFileName";
			this->textboxSubtitleFileName->ReadOnly = true;
			this->textboxSubtitleFileName->Size = System::Drawing::Size(696, 20);
			this->textboxSubtitleFileName->TabIndex = 96;
			this->textboxSubtitleFileName->Text = L"Subtitles file";
			this->textboxSubtitleFileName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupboxDepthFactors
			// 
			this->groupboxDepthFactors->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupboxDepthFactors->Controls->Add(this->labelScaleFactorForDepth);
			this->groupboxDepthFactors->Controls->Add(this->scrollbarScaleFactorForDepth);
			this->groupboxDepthFactors->Controls->Add(this->textboxScaleFactorForDepth);
			this->groupboxDepthFactors->Controls->Add(this->labelShiftFactorForDepth);
			this->groupboxDepthFactors->Controls->Add(this->scrollbarShiftFactorForDepth);
			this->groupboxDepthFactors->Controls->Add(this->textboxShiftFactorForDepth);
			this->groupboxDepthFactors->Location = System::Drawing::Point(700, 210);
			this->groupboxDepthFactors->Name = L"groupboxDepthFactors";
			this->groupboxDepthFactors->Size = System::Drawing::Size(182, 107);
			this->groupboxDepthFactors->TabIndex = 97;
			this->groupboxDepthFactors->TabStop = false;
			this->groupboxDepthFactors->Text = L"Depth = (disparity+shift)*scale";
			// 
			// radioButtonSettingsUseDefault
			// 
			this->radioButtonSettingsUseDefault->AutoSize = true;
			this->radioButtonSettingsUseDefault->Location = System::Drawing::Point(6, 19);
			this->radioButtonSettingsUseDefault->Name = L"radioButtonSettingsUseDefault";
			this->radioButtonSettingsUseDefault->Size = System::Drawing::Size(118, 17);
			this->radioButtonSettingsUseDefault->TabIndex = 98;
			this->radioButtonSettingsUseDefault->Text = L"Use default settings";
			this->radioButtonSettingsUseDefault->UseVisualStyleBackColor = true;
			this->radioButtonSettingsUseDefault->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonSettingsUseDefault_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 39);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(106, 17);
			this->radioButton2->TabIndex = 99;
			this->radioButton2->Text = L"Use user settings";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButtonSettingsUseDefault);
			this->groupBox1->Location = System::Drawing::Point(509, 215);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(145, 68);
			this->groupBox1->TabIndex = 100;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seetings Default/User";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1083, 675);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupboxDepthFactors);
			this->Controls->Add(this->textboxSubtitleFileName);
			this->Controls->Add(this->groupboxMovieInfo);
			this->Controls->Add(this->groupboxSubtitlesFont);
			this->Controls->Add(this->labelSubtitlesType);
			this->Controls->Add(this->comboboxSubtitlesType);
			this->Controls->Add(this->buttonSubtitlesFile);
			this->Controls->Add(this->labelResultsSaveTo);
			this->Controls->Add(this->textboxSaveToFolder);
			this->Controls->Add(this->buttonSaveToFolder);
			this->Controls->Add(this->buttonOpenSequenceRight);
			this->Controls->Add(this->textboxRight);
			this->Controls->Add(this->checkboxDisparityMap);
			this->Controls->Add(this->checkboxPauseComputing);
			this->Controls->Add(this->groupboxBlockMatchAnalysis);
			this->Controls->Add(this->groupboxMaskOperations);
			this->Controls->Add(this->groupboxPrecomputingOperations);
			this->Controls->Add(this->checkboxPreview);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->labelShowWindows);
			this->Controls->Add(this->checkboxStereoRight);
			this->Controls->Add(this->checkboxStereoLeft);
			this->Controls->Add(this->buttonOpenSequence);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->butStart);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L" ";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
			this->groupboxBlockMatchAnalysis->ResumeLayout(false);
			this->groupboxBlockMatchAnalysis->PerformLayout();
			this->groupboxMaskOperations->ResumeLayout(false);
			this->groupboxMaskOperations->PerformLayout();
			this->groupboxPrecomputingOperations->ResumeLayout(false);
			this->groupboxPrecomputingOperations->PerformLayout();
			this->groupboxSubtitlesFont->ResumeLayout(false);
			this->groupboxSubtitlesFont->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupboxMovieInfo->ResumeLayout(false);
			this->groupboxMovieInfo->PerformLayout();
			this->groupboxDepthFactors->ResumeLayout(false);
			this->groupboxDepthFactors->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


//
//MY VARIABLES
//
array<System::String^>^ g_strArrayFilesNamesRefilledLeft;
array<System::String^>^ g_strArrayFilesNamesRefilledRight;

int _iBlockSizeDefault, _iTimesToHalfsizeDefault, _iFilterSizeDefault, _iPrefilterIntensitySizeDefault, _iMinDisparityDefault, _iSearchLenghtDisparityDefault, _iTextureThresholdDefault, _iUniquenessRatioDefault, _iSpeckleWindowSizeDefault, _iSpeckleRangeDefault;
float _fShiftFactorForDepthDefault, _fScaleFactorForDepthDefault;
//
//
//




private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("StereoSubs NRC (NOT Release Candidate ;) )\nversion 0.1.1.||.0.01.0333.3.05.0.9.... ;)\n\n by majksoft\n\n\n\n Questions, bugs, suggestion? Please contact: \n\ne-mail: majkelmaciek@gmail.com\ne-mail: mwielgosz@chimney.pl",
							"About",
							MessageBoxButtons::OK,
							MessageBoxIcon::Asterisk,
							MessageBoxDefaultButton::Button1,
							MessageBoxOptions::DefaultDesktopOnly);
			 }

/////////////////////////////////////////////
//FORM SHOWN
/////////////////////////////////////////////
private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e) {

			 //setting start values for globals
			 this->scrollbarBlockSize->Value = Convert::ToInt32(this->textboxBlockSize->Text);
			 g_iBlockSize = this->scrollbarBlockSize->Value;
			 _iBlockSizeDefault = this->scrollbarBlockSize->Value;

			 this->scrollbarFilterSize->Value = Convert::ToInt32(this->textboxFilterSize->Text);
			 g_iFilterSize = this->scrollbarFilterSize->Value;
			 _iFilterSizeDefault = this->scrollbarFilterSize->Value;

			 this->scrollbarMinDisparity->Value = Convert::ToInt32(this->textboxMinDisparity->Text);
			 g_iMinDisparity = this->scrollbarMinDisparity->Value;
			 _iMinDisparityDefault = this->scrollbarMinDisparity->Value;

			 this->scrollbarPrefilterIntensitySize->Value = Convert::ToInt32(this->textboxPrefilterIntensitySize->Text);
			 g_iPrefilterIntensitySize = this->scrollbarPrefilterIntensitySize->Value;
			 _iPrefilterIntensitySizeDefault = this->scrollbarPrefilterIntensitySize->Value;

			 this->scrollbarSearchLenghtDisparity->Value = Convert::ToInt32(this->textboxSearchLenghtDisparity->Text);
			 g_iSearchLenghtDisparity = this->scrollbarSearchLenghtDisparity->Value;
			 _iSearchLenghtDisparityDefault = this->scrollbarSearchLenghtDisparity->Value;

			 this->scrollbarSpeckleRange->Value = Convert::ToInt32(this->textboxSpeckleRange->Text);
			 g_iSpeckleRange = this->scrollbarSpeckleRange->Value;
			 _iSpeckleRangeDefault = this->scrollbarSpeckleRange->Value;

			 this->scrollbarSpeckleWindowSize->Value = Convert::ToInt32(this->textboxSpeckleWindowSize->Text);
			 g_iSpeckleWindowSize = this->scrollbarSpeckleWindowSize->Value;
			 _iSpeckleWindowSizeDefault = this->scrollbarSpeckleWindowSize->Value;

			 this->scrollbarTextureThreshold->Value = Convert::ToInt32(this->textboxTextureThreshold->Text);
			 g_iTextureThreshold = this->scrollbarTextureThreshold->Value;
			 _iTextureThresholdDefault = this->scrollbarTextureThreshold->Value;

			 this->scrollbarTimesToHalfsize->Value = Convert::ToInt32(this->textboxTimesToHalfsize->Text);
			 g_iTimesToHalfsize = this->scrollbarTimesToHalfsize->Value;
			 _iTimesToHalfsizeDefault = this->scrollbarTimesToHalfsize->Value;

			 this->scrollbarUniquenessRatio->Value = Convert::ToInt32(this->textboxUniquenessRatio->Text);
			 g_iUniquenessRatio = this->scrollbarUniquenessRatio->Value;
			 _iUniquenessRatioDefault = this->scrollbarUniquenessRatio->Value;

			 //this->scrollbarSegmentationColorRadial->Value = Convert::ToInt32(this->textboxSegmentationColorRadial->Text);
			 //g_iSegmentationColorRadial = this->scrollbarSegmentationColorRadial->Value;

			 //this->scrollbarSegmentationSpatialRadial->Value = Convert::ToInt32(this->textboxSegmentationSpatialRadial->Text);
			 //g_iSegmentationSpatialRadial = this->scrollbarSegmentationSpatialRadial->Value;


			 g_bCheckboxStereoLeft = this->checkboxStereoLeft->Checked;
			 g_bCheckboxStereoRight = this->checkboxStereoRight->Checked;
			 g_bCheckboxDisparityMap = this->checkboxDisparityMap->Checked;

			 //this->groupboxCameraLensType->Enabled = 0;
			 //g_bAutoSetupBMState = this->checkboxAutoSetupBMState->Checked;

			 //g_bSegmentation = this->checkboxSegmentation->Checked;


			 g_bStopComputing = 1;

			 //subtitle font
			 g_strFontSubtitleName = ToStdString( fontDialog1->Font->Name );
			 g_fFontSubtitleSize = fontDialog1->Font->Size;
			 g_uiFontSubtitleBorder = scrollbarSubtitlesBorderSize->Value;

			 //set default name and language of movie
			 g_strMovieName = convertSysStrToStdStr(textboxMovieName->Text);
			 g_strSubtitlesLanguage = convertSysStrToStdStr(textboxSubtitlesLanguage->Text);			 

			 //setting up stereo state
			 m_stereoBMState = cvCreateStereoBMState(g_iCameraLensType, g_iSearchLenghtDisparity);


			 //DEPTH factors
			 g_fScaleFactorForDepth = float(scrollbarScaleFactorForDepth->Value - 100) / float(10);
			 textboxScaleFactorForDepth->Text = g_fScaleFactorForDepth.ToString();
			 _fScaleFactorForDepthDefault = scrollbarScaleFactorForDepth->Value;
			 g_fShiftFactorForDepth = scrollbarShiftFactorForDepth->Value - 50;
			 textboxShiftFactorForDepth->Text = g_fShiftFactorForDepth.ToString();
			 _fShiftFactorForDepthDefault = scrollbarShiftFactorForDepth->Value;

			 //FPS
			 g_uiMovieFrameRate = Convert::ToInt16(comboboxMovieFrameRate->Text);

			 //subtitles type
			 if (comboboxSubtitlesType->Text == "Text in XML file")
				 g_iSubtitlesImage = 0;
			 if (comboboxSubtitlesType->Text == "Images PNG + XML")
				 g_iSubtitlesImage = 1;
			 if (comboboxSubtitlesType->Text == "Draw subs into sequence")
				 g_iSubtitlesImage = -1;

			 //if testing program
			 if (toolStripComboboxProgramTest->Text == "Test program OFF")
				 g_bProgramTesting = false;
			 if (toolStripComboboxProgramTest->Text == "Test program ON")
				 g_bProgramTesting = true;

			 radioButtonSettingsUseDefault->Checked = 1;

		 }



/////////////////////////////////////////////
//FORM PAINT
/////////////////////////////////////////////
private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 this->progressBar1->Value = g_iFrameCount;
		 }


/////////////////////////////////////////////
//BUTTONS
/////////////////////////////////////////////
private: System::Void buttonOpenSequence_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = "";
			 try{	 
				 if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK){
					 if (openFileDialog1->FileNames->Length == 2){
						 
						 //refilling filenames from 'in' to 'out'
							 
							 array<System::String^>^ _strArraySplitedDir;
							 array<System::String^>^ _strArraySplitedNameTemp;
							 System::String^ _strFileNameTemp;
							 std::stringstream out; 
							 char *_cTemp;
							 
							 array<Char>^_cArraySeparator = gcnew array<Char>{'\\'};
							 array<Char>^_cArraySeparatorDot = gcnew array<Char>{'.'};
							 int _lastIndex;
							 int _iFileIn = 0, _iFileOut = 0, _iFileInOutTemp = 0;

							 //reading first selected file
							_strArraySplitedDir = openFileDialog1->FileNames[0]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );
							_lastIndex = _strArraySplitedDir->Length;
							_strFileNameTemp = _strArraySplitedDir[_lastIndex-1]->ToString();
							_strArraySplitedNameTemp = _strFileNameTemp->ToString()->Split( _cArraySeparatorDot, StringSplitOptions::RemoveEmptyEntries );
							_strFileNameTemp = _strArraySplitedNameTemp[0]->ToString();
							_iFileIn = Convert::ToInt32(_strFileNameTemp);
							//reading second selected file
							_strArraySplitedDir = openFileDialog1->FileNames[1]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );
							_lastIndex = _strArraySplitedDir->Length;
							_strFileNameTemp = _strArraySplitedDir[_lastIndex-1]->ToString();
							_strArraySplitedNameTemp = _strFileNameTemp->ToString()->Split( _cArraySeparatorDot, StringSplitOptions::RemoveEmptyEntries );
							_strFileNameTemp = _strArraySplitedNameTemp[0]->ToString();
							_iFileOut = Convert::ToInt32(_strFileNameTemp);
							if (_iFileIn > _iFileOut){
								_iFileInOutTemp = _iFileIn;
								_iFileIn = _iFileOut;
								_iFileOut = _iFileInOutTemp;
							}
							
							g_strArrayFilesNamesRefilledLeft = gcnew array<System::String ^>(_iFileOut-_iFileIn+1);
							//sprintf(_cTemp,"%0%dd", (_strFileNameTemp->Length));
							
							for (int i=_iFileIn; i<=_iFileOut; i++){
								out.width(_strFileNameTemp->Length);
								out.fill('0');
								out << i;
								_strFileNameTemp = gcnew String((out.str()).c_str());	//convert from 'std::stringstream' to 'std::string' to 'system::string'
								_strArraySplitedNameTemp[0] = _strFileNameTemp;	//trzeba 'i' sformatowac tak zeby mialo dlugosc '_strFileNameTemp->Lenght'
								_strArraySplitedDir[_lastIndex-1] = String::Join(".", _strArraySplitedNameTemp);
								g_strArrayFilesNamesRefilledLeft[i-_iFileIn] = String::Join("\\", _strArraySplitedDir);
								out.str("");

							}
						 //end of refilling

						 int _iEnd = g_strArrayFilesNamesRefilledLeft->Length;

						 textBox1->Text += "LEFT sequence:\r\n\n";
						 textBox1->Text += "Marked IN on:\r\n";
						 textBox1->Text += openFileDialog1->FileNames[0]->ToString();
						 textBox1->Text += "\r\n\r\n\r\n";
						 textBox1->Text += "Marked OUT on:\r\n";
						 textBox1->Text += openFileDialog1->FileNames[1]->ToString();

						 //progressBar1->Value = 0;
						 progressBar1->Maximum = _iEnd;

					 }
					 else
						 MessageBox::Show("Please select 2 files of the sequence - IN and OUT");
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }

private: System::Void buttonOpenSequenceRight_Click(System::Object^  sender, System::EventArgs^  e) {
			 textboxRight->Text = "";
			 try{	 
				 if (openFileDialogRight->ShowDialog() == Windows::Forms::DialogResult::OK){
					 if (openFileDialogRight->FileNames->Length == 2){
						 
						 //refilling filenames from 'in' to 'out'
							 
							 array<System::String^>^ _strArraySplitedDir;
							 array<System::String^>^ _strArraySplitedNameTemp;
							 System::String^ _strFileNameTemp;
							 std::stringstream out; 
							 char *_cTemp;
							 
							 array<Char>^_cArraySeparator = gcnew array<Char>{'\\'};
							 array<Char>^_cArraySeparatorDot = gcnew array<Char>{'.'};
							 int _lastIndex;
							 int _iFileIn = 0, _iFileOut = 0, _iFileInOutTemp = 0;

							 //reading first selected file
							_strArraySplitedDir = openFileDialogRight->FileNames[0]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );
							_lastIndex = _strArraySplitedDir->Length;
							_strFileNameTemp = _strArraySplitedDir[_lastIndex-1]->ToString();
							_strArraySplitedNameTemp = _strFileNameTemp->ToString()->Split( _cArraySeparatorDot, StringSplitOptions::RemoveEmptyEntries );
							_strFileNameTemp = _strArraySplitedNameTemp[0]->ToString();
							_iFileIn = Convert::ToInt32(_strFileNameTemp);
							//reading second selected file
							_strArraySplitedDir = openFileDialogRight->FileNames[1]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );
							_lastIndex = _strArraySplitedDir->Length;
							_strFileNameTemp = _strArraySplitedDir[_lastIndex-1]->ToString();
							_strArraySplitedNameTemp = _strFileNameTemp->ToString()->Split( _cArraySeparatorDot, StringSplitOptions::RemoveEmptyEntries );
							_strFileNameTemp = _strArraySplitedNameTemp[0]->ToString();
							_iFileOut = Convert::ToInt32(_strFileNameTemp);
							if (_iFileIn > _iFileOut){
								_iFileInOutTemp = _iFileIn;
								_iFileIn = _iFileOut;
								_iFileOut = _iFileInOutTemp;
							}
							
							g_strArrayFilesNamesRefilledRight = gcnew array<System::String ^>(_iFileOut-_iFileIn+1);
							//sprintf(_cTemp,"%0%dd", (_strFileNameTemp->Length));
							
							for (int i=_iFileIn; i<=_iFileOut; i++){
								out.width(_strFileNameTemp->Length);
								out.fill('0');
								out << i;
								_strFileNameTemp = gcnew String((out.str()).c_str());	//convert from 'std::stringstream' to 'std::string' to 'system::string'
								_strArraySplitedNameTemp[0] = _strFileNameTemp;	//trzeba 'i' sformatowac tak zeby mialo dlugosc '_strFileNameTemp->Lenght'
								_strArraySplitedDir[_lastIndex-1] = String::Join(".", _strArraySplitedNameTemp);
								g_strArrayFilesNamesRefilledRight[i-_iFileIn] = String::Join("\\", _strArraySplitedDir);
								out.str("");

							}
						 //end of refilling

						 int _iEnd = g_strArrayFilesNamesRefilledRight->Length;

						 textboxRight->Text += "RIGHT sequence:\r\n\n";
						 textboxRight->Text += "Marked IN on:\r\n";
						 textboxRight->Text += openFileDialogRight->FileNames[0]->ToString();
						 textboxRight->Text += "\r\n\r\n\r\n";
						 textboxRight->Text += "Marked OUT on:\r\n";
						 textboxRight->Text += openFileDialogRight->FileNames[1]->ToString();

						 //progressBar1->Value = 0;
						 progressBar1->Maximum = _iEnd;

					 }
					 else
						 MessageBox::Show("Please select 2 files of the sequence - IN and OUT");
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }

private: System::Void openSequenceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = "";
			 try{	 
				 if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK){
					 int _iEnd = openFileDialog1->FileNames->Length;
					 g_strArrayFilesNamesRefilledLeft = gcnew array<System::String ^>(openFileDialog1->FileNames->Length);
					 g_strArrayFilesNamesRefilledLeft = openFileDialog1->FileNames;
					 for (int i = 0; i < _iEnd; i++){
						 textBox1->Text += "$";
						 textBox1->Text += openFileDialog1->FileNames[i]->ToString();
						 textBox1->Text += "\r\n";		
						 //textBox1.Text="First Line" + Environment.NewLine + "Second Line";
						 //cvWaitKey(1000);
					 }
					 progressBar1->Maximum = _iEnd;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }

		 }
private: System::Void openSequenceRIGHTmarkFromINToOUTAllFilesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textboxRight->Text = "";
			 try{	 
				 if (openFileDialogRight->ShowDialog() == Windows::Forms::DialogResult::OK){
					 int _iEnd = openFileDialogRight->FileNames->Length;
					 g_strArrayFilesNamesRefilledRight = gcnew array<System::String ^>(openFileDialogRight->FileNames->Length);
					 g_strArrayFilesNamesRefilledRight = openFileDialogRight->FileNames;
					 for (int i = 0; i < _iEnd; i++){
						 textboxRight->Text += "$";
						 textboxRight->Text += openFileDialogRight->FileNames[i]->ToString();
						 textboxRight->Text += "\r\n";		
					 }
					 progressBar1->Maximum = _iEnd;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }

		 }

private: System::Void butStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 g_bStopComputing = !g_bStopComputing;
			 
			 if (!g_bStopComputing){
				 
				 //this->groupboxBlockMatchAnalysis->Enabled = 0;
				 //this->groupboxMaskOperations->Enabled = 0;
				 //this->groupboxPrecomputingOperations->Enabled = 0;

				 this->butStart->Text = "Stop";
				 this->checkboxPauseComputing->Checked = false;

				 startStereo(g_strArrayFilesNamesRefilledLeft,g_strArrayFilesNamesRefilledRight, this->folderBrowserDialogSaveToFolder->SelectedPath, m_stereoBMState);
				 
				 this->checkboxPauseComputing->Checked = true;
				 this->butStart->Text = "Start";

				 //this->groupboxBlockMatchAnalysis->Enabled = 1;
				 //this->groupboxMaskOperations->Enabled = 1;
				 //this->groupboxPrecomputingOperations->Enabled = 1;

				 g_bStopComputing = 0;
				 
			 }
			 else{
				 this->butStart->Text = "Start";

			 }
		 }

private: System::Void buttonSaveToFolder_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{	 
				 if (folderBrowserDialogSaveToFolder->ShowDialog() == Windows::Forms::DialogResult::OK){
					 textboxSaveToFolder->Text = folderBrowserDialogSaveToFolder->SelectedPath;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }

private: System::Void buttonFont_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{	 
				 if (fontDialog1->ShowDialog() == Windows::Forms::DialogResult::OK){
					 g_strFontSubtitleName = ToStdString( fontDialog1->Font->Name );
					 g_fFontSubtitleSize = fontDialog1->Font->Size;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }

private: System::Void buttonSubtitlesFile_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{	 
				 if (openFileDialogSubtitlesFile->ShowDialog() == Windows::Forms::DialogResult::OK){
					 getTimecodesAndSubtitles( openFileDialogSubtitlesFile->FileName);
					 textboxSubtitleFileName->Text = openFileDialogSubtitlesFile->FileName;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }


/////////////////////////////////////////////
//SCROLLBARS
/////////////////////////////////////////////
private: System::Void scrollbarBlockSize_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (this->scrollbarBlockSize->Value % 2 == 0)	//to size always be odd
				 this->scrollbarBlockSize->Value = this->scrollbarBlockSize->Value - 1;
			 
			 this->textboxBlockSize->Text = this->scrollbarBlockSize->Value.ToString();
			 g_iBlockSize = this->scrollbarBlockSize->Value;

			 g_bBlockSizeToRefresh= 1;
			 previewRefreshStereo(openFileDialog1->FileNames);
		 }
private: System::Void scrollbarTimesToHalfsize_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->textboxTimesToHalfsize->Text = this->scrollbarTimesToHalfsize->Value.ToString();
			 g_iTimesToHalfsize = this->scrollbarTimesToHalfsize->Value;
			 
			 g_bTimesToHalfsizeToRefresh = 1;
			 previewRefreshStereo(openFileDialog1->FileNames);
		 }
private: System::Void scrollbarPrefilterIntensitySize_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (this->scrollbarPrefilterIntensitySize->Value % 2 == 0)	//to size always be odd
				 this->scrollbarPrefilterIntensitySize->Value = this->scrollbarPrefilterIntensitySize->Value - 1;
			 
			 this->textboxPrefilterIntensitySize->Text = this->scrollbarPrefilterIntensitySize->Value.ToString();
			 g_iPrefilterIntensitySize = this->scrollbarPrefilterIntensitySize->Value;

			 g_bPrefilterIntensitySizeToRefresh= 1;
			 previewRefreshStereo(openFileDialog1->FileNames);

		 }
private: System::Void scrollbarFilterSize_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (this->scrollbarFilterSize->Value % 2 == 0)	//to size always be odd
				 this->scrollbarFilterSize->Value = this->scrollbarFilterSize->Value - 1;
			 
			 this->textboxFilterSize->Text = this->scrollbarFilterSize->Value.ToString();
			 g_iFilterSize = this->scrollbarFilterSize->Value;

			 g_bFilterSizeToRefresh= 1;
			 previewRefreshStereo(openFileDialog1->FileNames);

		 }
private: System::Void scrollbarMinDisparity_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->textboxMinDisparity->Text = this->scrollbarMinDisparity->Value.ToString();
			 g_iMinDisparity = this->scrollbarMinDisparity->Value;
			 
			 g_bMinDisparityToRefresh = 1;
			 previewRefreshStereo(openFileDialog1->FileNames);
		 }
private: System::Void scrollbarSearchLenghtDisparity_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->textboxSearchLenghtDisparity->Text = this->scrollbarSearchLenghtDisparity->Value.ToString();
			 g_iSearchLenghtDisparity = this->scrollbarSearchLenghtDisparity->Value;
			 
			 g_bSearchLenghtDisparityToRefresh = 1;
			 previewRefreshStereo(openFileDialog1->FileNames);
		 }
private: System::Void scrollbarTextureThreshold_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->textboxTextureThreshold->Text = this->scrollbarTextureThreshold->Value.ToString();
			 g_iTextureThreshold = this->scrollbarTextureThreshold->Value;
			 //
			 //g_bTextureThresholdToRefresh = 1;
			 //previewRefreshStereo(openFileDialog1->FileNames);
		 }
private: System::Void scrollbarUniquenessRatio_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->textboxUniquenessRatio->Text = this->scrollbarUniquenessRatio->Value.ToString();
			 g_iUniquenessRatio = this->scrollbarUniquenessRatio->Value;
			 //
			 //g_bUniquenessRatioToRefresh = 1;
			 //previewRefreshStereo(openFileDialog1->FileNames);
		 }
private: System::Void scrollbarSpeckleWindowSize_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->textboxSpeckleWindowSize->Text = this->scrollbarSpeckleWindowSize->Value.ToString();
			 g_iSpeckleWindowSize = this->scrollbarSpeckleWindowSize->Value;
			 
			 g_bSpeckleWindowSizeToRefresh = 1;
			 previewRefreshStereo(openFileDialog1->FileNames);

		 }
private: System::Void scrollbarSpeckleRange_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->textboxSpeckleRange->Text = this->scrollbarSpeckleRange->Value.ToString();
			 g_iSpeckleRange = this->scrollbarSpeckleRange->Value;
			 //
			 //g_bSpeckleRangeToRefresh = 1;
			 //previewRefreshStereo(openFileDialog1->FileNames);
		 }

//private: System::Void scrollbarSegmentationSpatialRadial_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
//			 this->textboxSegmentationSpatialRadial->Text = this->scrollbarSegmentationSpatialRadial->Value.ToString();
//			 g_iSegmentationSpatialRadial = this->scrollbarSegmentationSpatialRadial->Value;
//		 }
//private: System::Void scrollbarSegmentationColorRadial_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
//			 this->textboxSegmentationColorRadial->Text = this->scrollbarSegmentationColorRadial->Value.ToString();
//			 g_iSegmentationColorRadial = this->scrollbarSegmentationColorRadial->Value;
//		 }
//private: System::Void scrollbarKparameter_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
//			 this->textboxKparameter->Text = this->scrollbarKparameter->Value.ToString();
//			 g_iKparameter = this->scrollbarKparameter->Value;
//		 }
//private: System::Void scrollbarMaxIterations_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
//			 this->textboxMaxIterations->Text = this->scrollbarMaxIterations->Value.ToString();
//			 g_iMaxIterations = this->scrollbarMaxIterations->Value;
//		 }
//private: System::Void scrollbarInteractionRadius_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
//			 this->textboxInteractionRadius->Text = this->scrollbarInteractionRadius->Value.ToString();
//			 g_iInteractionRadius = this->scrollbarInteractionRadius->Value;
//		 }
//private: System::Void scrollBarIthreshold_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
//			 this->textboxIthreshold->Text = this->scrollBarIthreshold->Value.ToString();
//			 g_iIthreshold = this->scrollBarIthreshold->Value;
//		 }

private: System::Void scrollbarSubtitlesBorderSize_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (this->scrollbarSubtitlesBorderSize->Value == 0)
				this->textboxSubtitlesBorderSize->Text = "NONE";

			 if (this->scrollbarSubtitlesBorderSize->Value == 1)
				this->textboxSubtitlesBorderSize->Text = "SMALL";

			 if (this->scrollbarSubtitlesBorderSize->Value == 2)
				this->textboxSubtitlesBorderSize->Text = "MEDIUM";

			 if (this->scrollbarSubtitlesBorderSize->Value == 3)
				this->textboxSubtitlesBorderSize->Text = "LARGE";

			 g_uiFontSubtitleBorder = this->scrollbarSubtitlesBorderSize->Value;
		 }

private: System::Void scrollbarShiftFactorForDepth_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_fShiftFactorForDepth = scrollbarShiftFactorForDepth->Value - 50;
			 textboxShiftFactorForDepth->Text = g_fShiftFactorForDepth.ToString();
		 }
private: System::Void scrollbarScaleFactorForDepth_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_fScaleFactorForDepth = float(scrollbarScaleFactorForDepth->Value - 100) / float(10);
			 textboxScaleFactorForDepth->Text = g_fScaleFactorForDepth.ToString();
		 }

/////////////////////////////////////////////
//TEXTBOXES
/////////////////////////////////////////////

private: System::Void textboxMovieName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_strMovieName = convertSysStrToStdStr(textboxMovieName->Text);
		 }
private: System::Void textboxSubtitlesLanguage_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_strSubtitlesLanguage = convertSysStrToStdStr(textboxSubtitlesLanguage->Text);
		 }


/////////////////////////////////////////////
//RADIO BUTTONS
/////////////////////////////////////////////
//private: System::Void radiobuttonNormal_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//			 if (radiobuttonNormal->Checked == 1){
//				 g_iCameraLensType = 0;
//				 this->radiobuttonFishEye->Checked = 0;
//				 this->radiobuttonNarrowFieldOfView->Checked = 0;
//				 cvReleaseStereoBMState(&m_stereoBMState);
//				 m_stereoBMState = cvCreateStereoBMState(g_iCameraLensType, g_iSearchLenghtDisparity);
//			 }
//		 }
//private: System::Void radiobuttonFishEye_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//			 if (radiobuttonFishEye->Checked == 1){
//				 g_iCameraLensType = 1;
//				 this->radiobuttonNormal->Checked = 0;
//				 this->radiobuttonNarrowFieldOfView->Checked = 0;
//				 cvReleaseStereoBMState(&m_stereoBMState);
//				 m_stereoBMState = cvCreateStereoBMState(g_iCameraLensType, g_iSearchLenghtDisparity);
//			 }
//		 }
//private: System::Void radiobuttonNarrowFieldOfView_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//			 if (radiobuttonNarrowFieldOfView->Checked == 1){
//				 g_iCameraLensType = 2;
//				 this->radiobuttonNormal->Checked = 0;
//				 this->radiobuttonFishEye->Checked = 0;
//				 cvReleaseStereoBMState(&m_stereoBMState);
//				 m_stereoBMState = cvCreateStereoBMState(g_iCameraLensType, g_iSearchLenghtDisparity);
//			 }
//		 }
private: System::Void radioButtonSettingsUseDefault_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButtonSettingsUseDefault->Checked == 1){
				 this->radioButton2->Checked = 0;

				 this->scrollbarBlockSize->Value = _iBlockSizeDefault;
				 this->scrollbarFilterSize->Value = _iFilterSizeDefault;
				 this->scrollbarMinDisparity->Value = _iMinDisparityDefault;
				 this->scrollbarPrefilterIntensitySize->Value = _iPrefilterIntensitySizeDefault;
				 this->scrollbarSearchLenghtDisparity->Value = _iSearchLenghtDisparityDefault;
				 this->scrollbarSpeckleRange->Value = _iSpeckleRangeDefault;
				 this->scrollbarSpeckleWindowSize->Value = _iSpeckleWindowSizeDefault;
				 this->scrollbarTextureThreshold->Value = _iTextureThresholdDefault;
				 this->scrollbarTimesToHalfsize->Value = _iTimesToHalfsizeDefault;
				 this->scrollbarUniquenessRatio->Value = _iUniquenessRatioDefault;
				 this->scrollbarScaleFactorForDepth->Value = _fScaleFactorForDepthDefault;
				 this->scrollbarShiftFactorForDepth->Value = _fShiftFactorForDepthDefault;

				 this->scrollbarBlockSize->Enabled = 0;
				 this->scrollbarFilterSize->Enabled = 0;
				 this->scrollbarMinDisparity->Enabled = 0;
				 this->scrollbarPrefilterIntensitySize->Enabled = 0;
				 this->scrollbarSearchLenghtDisparity->Enabled = 0;
				 this->scrollbarSpeckleRange->Enabled = 0;
				 this->scrollbarSpeckleWindowSize->Enabled = 0;
				 this->scrollbarTextureThreshold->Enabled = 0;
				 this->scrollbarUniquenessRatio->Enabled = 0;
			 }
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton2->Checked == 1){
				 this->radioButtonSettingsUseDefault->Checked = 0;

				 this->scrollbarBlockSize->Enabled = 1;
				 this->scrollbarFilterSize->Enabled = 1;
				 this->scrollbarMinDisparity->Enabled = 1;
				 this->scrollbarPrefilterIntensitySize->Enabled = 1;
				 this->scrollbarSearchLenghtDisparity->Enabled = 1;
				 this->scrollbarSpeckleRange->Enabled = 1;
				 this->scrollbarSpeckleWindowSize->Enabled = 1;
				 this->scrollbarTextureThreshold->Enabled = 1;
				 this->scrollbarUniquenessRatio->Enabled = 1;
			 }
		 }


/////////////////////////////////////////////
//COMBOBOX
/////////////////////////////////////////////


private: System::Void comboboxMovieFrameRate_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_uiMovieFrameRate = Convert::ToInt16(comboboxMovieFrameRate->Text);
		 }

private: System::Void comboboxSubtitlesType_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (comboboxSubtitlesType->Text == "Text in XML file")
				 g_iSubtitlesImage = 0;
			 if (comboboxSubtitlesType->Text == "Images PNG + XML")
				 g_iSubtitlesImage = 1;
			 if (comboboxSubtitlesType->Text == "Draw subs into sequence")
				 g_iSubtitlesImage = -1;

		 }

private: System::Void toolStripComboboxProgramTest_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (toolStripComboboxProgramTest->Text == "Test program OFF")
				 g_bProgramTesting = false;
			 if (toolStripComboboxProgramTest->Text == "Test program ON")
				 g_bProgramTesting = true;
		 }


/////////////////////////////////////////////
//CHECKBOXES
/////////////////////////////////////////////
private: System::Void checkboxStereoLeft_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_bCheckboxStereoLeft = this->checkboxStereoLeft->Checked;
		 }
private: System::Void checkboxStereoRight_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_bCheckboxStereoRight = this->checkboxStereoRight->Checked;
		 }
private: System::Void checkboxDisparityMap_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_bCheckboxDisparityMap = this->checkboxDisparityMap->Checked;
		 }
private: System::Void checkboxGaussianBlur_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_bGaussianBlur = this->checkboxGaussianBlur->Checked;

			 g_bGaussianBlurToRefresh = this->checkboxGaussianBlur->Checked;

			 previewRefreshStereo(openFileDialog1->FileNames);
		 }
private: System::Void checkboxMedian_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 g_bMedian = this->checkboxMedian->Checked;

			 g_bMedianToRefresh = this->checkboxMedian->Checked;

			 previewRefreshStereo(openFileDialog1->FileNames);
		 }
private: System::Void checkboxAutoSetupBMState_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//			 g_bAutoSetupBMState = this->checkboxAutoSetupBMState->Checked;
			 //if (this->checkboxAutoSetupBMState->Checked){
				 m_stereoBMState = cvCreateStereoBMState(g_iCameraLensType, g_iSearchLenghtDisparity);
//				 this->groupboxCameraLensType->Enabled = 1;

				 this->scrollbarMinDisparity->Value = m_stereoBMState->minDisparity;
				 this->scrollbarSearchLenghtDisparity->Value = m_stereoBMState->numberOfDisparities;
				 this->scrollbarPrefilterIntensitySize->Value = m_stereoBMState->preFilterSize;
				 this->scrollbarBlockSize->Value = m_stereoBMState->SADWindowSize;
				 this->scrollbarSpeckleRange->Value = m_stereoBMState->speckleRange;
				 this->scrollbarSpeckleWindowSize->Value = m_stereoBMState->speckleWindowSize;
				 this->scrollbarTextureThreshold->Value = m_stereoBMState->textureThreshold;
				 this->scrollbarUniquenessRatio->Value = m_stereoBMState->uniquenessRatio;

				 this->scrollbarBlockSize->Enabled = 0;
				 this->scrollbarMinDisparity->Enabled = 0;
				 this->scrollbarPrefilterIntensitySize->Enabled = 0;
				 this->scrollbarSearchLenghtDisparity->Enabled = 0;
				 this->scrollbarSpeckleRange->Enabled = 0;
				 this->scrollbarSpeckleWindowSize->Enabled = 0;
				 this->scrollbarTextureThreshold->Enabled = 0;
				 this->scrollbarUniquenessRatio->Enabled = 0;
			 //}
			 //else{
				// this->groupboxCameraLensType->Enabled = 0;

				// this->scrollbarBlockSize->Enabled = 1;
				// this->scrollbarMinDisparity->Enabled = 1;
				// this->scrollbarPrefilterIntensitySize->Enabled = 1;
				// this->scrollbarSearchLenghtDisparity->Enabled = 1;
				// this->scrollbarSpeckleRange->Enabled = 1;
				// this->scrollbarSpeckleWindowSize->Enabled = 1;
				// this->scrollbarTextureThreshold->Enabled = 1;
				// this->scrollbarUniquenessRatio->Enabled = 1;
			 //}
		 }
//private: System::Void checkboxSegmentation_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//			 g_bSegmentation= this->checkboxSegmentation->Checked;
//
//			 g_bSegmentationToRefresh = this->checkboxSegmentation->Checked;
//
//			 previewRefreshStereo(openFileDialog1->FileNames);
//		 }



////////////////////
//help functions
////////////////////

std::string ToStdString(System::String^ source)
{
    std::string result;
    int len = source->Length;
    for(int i=0; i<len; i++)
        result += (char)source[i];
    return result;
}
		 
System::String^ ToSysString(std::string source)
{
    System::String^ result;
    int len = (int)source.length();
    for(int i=0; i<len; i++)
        result += (wchar_t)source[i];
    return result;
}



private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }











};
}