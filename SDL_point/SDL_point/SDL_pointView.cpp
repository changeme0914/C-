
// SDL_pointView.cpp : CSDL_pointView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "SDL_point.h"
#endif

#include "SDL_pointDoc.h"
#include "SDL_pointView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSDL_pointView

IMPLEMENT_DYNCREATE(CSDL_pointView, CView)

BEGIN_MESSAGE_MAP(CSDL_pointView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_line, &CSDL_pointView::Online)
	ON_COMMAND(ID_juxing, &CSDL_pointView::Onjuxing)
	ON_COMMAND(ID_tuoyuan, &CSDL_pointView::Ontuoyuan)
	ON_COMMAND(ID_zhixian, &CSDL_pointView::Onzhixian)
	ON_COMMAND(ID_xuxian, &CSDL_pointView::Onxuxian)
	ON_COMMAND(ID_one, &CSDL_pointView::Onone)
	ON_COMMAND(ID_two, &CSDL_pointView::Ontwo)
	ON_COMMAND(ID_three, &CSDL_pointView::Onthree)
	ON_COMMAND(ID_hbcolor, &CSDL_pointView::Onhbcolor)
	ON_COMMAND(ID_tccolor, &CSDL_pointView::Ontccolor)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_PAINT()
	ON_COMMAND(ID_Paint, &CSDL_pointView::onpen)
END_MESSAGE_MAP()

// CSDL_pointView ����/����

CSDL_pointView::CSDL_pointView()
{
	w = 1; //��ʼ���߿�Ϊ1
	shape = 1;  //��ʼ��������״Ϊֱ��
	style = PS_SOLID;  //��ʼ������Ϊʵ��
	m_nColor = RGB(0, 0, 0);  //��ʼ��������ɫΪ��ɫ
	m_fColor = RGB(255, 255, 255);  //��ʼ�������ɫΪ��ɫ

}

CSDL_pointView::~CSDL_pointView()
{
}

BOOL CSDL_pointView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CSDL_pointView ����

void CSDL_pointView::OnDraw(CDC* /*pDC*/)
{
	CSDL_pointDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CSDL_pointView ��ӡ

BOOL CSDL_pointView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CSDL_pointView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CSDL_pointView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CSDL_pointView ���

#ifdef _DEBUG
void CSDL_pointView::AssertValid() const
{
	CView::AssertValid();
}

void CSDL_pointView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSDL_pointDoc* CSDL_pointView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSDL_pointDoc)));
	return (CSDL_pointDoc*)m_pDocument;
}
#endif //_DEBUG


// CSDL_pointView ��Ϣ�������


void CSDL_pointView::Online()
{
	shape = 1;
}


void CSDL_pointView::Onjuxing()
{
	shape = 2;

}


void CSDL_pointView::Ontuoyuan()
{
	shape = 3;

}


void CSDL_pointView::Onzhixian()
{
	style = PS_SOLID;

}


void CSDL_pointView::Onxuxian()
{
	style = PS_DASH;

}


void CSDL_pointView::Onone()
{
	w = 1;

}


void CSDL_pointView::Ontwo()
{
	w = 2;
	
}


void CSDL_pointView::Onthree()
{
	w = 3;
}


void CSDL_pointView::Onhbcolor()
{
	CColorDialog Color; // ������ɫ�Ի���
	if (Color.DoModal() == IDOK)  // ����û����OK��ť 
		m_nColor = Color.GetColor(); // ������ɫ,����ɫ����m_nColor
	// TODO:  �ڴ���������������
}


void CSDL_pointView::Ontccolor()
{
	CColorDialog FillColor; // ������ɫ�Ի���
	if (FillColor.DoModal() == IDOK)  // ����û����OK��ť  
		m_fColor = FillColor.GetColor(); // ������ɫ,����ɫ����m_fColor
	// TODO:  �ڴ���������������
}

void CSDL_pointView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	m_Down = TRUE;      	//��갴��  
	SetCapture();       //��ȡ����
	opoint = point;        //������������긳���������opoint
	ReleaseCapture();   //�ͷ�����
}


void CSDL_pointView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
	m_Down = FALSE;     //��겻���£�������
	Invalidate(0);    //ˢ��
}


void CSDL_pointView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnMouseMove(nFlags, point);
	if (m_Down)        //�����갴��
		cpoint = point;      //��������ڵ����긳���յ�����cpoint
}

void CSDL_pointView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	CPen pen;   //���廭��
	CBrush brush;     //���廭ˢ
	pen.CreatePen(style, w, m_nColor);  //��������
	brush.CreateSolidBrush(m_fColor);     //������ˢ
	dc.SelectObject(&pen);      //��ȡ����
	dc.SelectObject(&brush);    //��ȡ��ˢ
	if (shape == 1)//����ֱ��,��opoint��cpoint����
	{
		dc.MoveTo(opoint.x, opoint.y);
		dc.LineTo(cpoint.x, cpoint.y);
	}
	if (shape == 2)
		dc.Rectangle(opoint.x, opoint.y, cpoint.x, cpoint.y); //���ƾ���
	if (shape == 3)
		dc.Ellipse(opoint.x, opoint.y, cpoint.x, cpoint.y);	//������Բ
}




void CSDL_pointView::onpen()
{
	CPaintDC dc(this); // device context for painting
	CPen pen;   //���廭��
	CBrush brush;     //���廭ˢ
	pen.CreatePen(style, w, m_nColor);  //��������
	brush.CreateSolidBrush(m_fColor);     //������ˢ
	dc.SelectObject(&pen);      //��ȡ����
	dc.SelectObject(&brush);    //��ȡ��ˢ
	if (shape == 1)//����ֱ��,��opoint��cpoint����
	{
		dc.MoveTo(opoint.x, opoint.y);
		dc.LineTo(cpoint.x, cpoint.y);
	}
	if (shape == 2)
		dc.Rectangle(opoint.x, opoint.y, cpoint.x, cpoint.y); //���ƾ���
	if (shape == 3)
		dc.Ellipse(opoint.x, opoint.y, cpoint.x, cpoint.y);	//������Բ
	// TODO:  �ڴ���������������
}
