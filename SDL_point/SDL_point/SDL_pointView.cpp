
// SDL_pointView.cpp : CSDL_pointView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
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

// CSDL_pointView 构造/析构

CSDL_pointView::CSDL_pointView()
{
	w = 1; //初始化线宽为1
	shape = 1;  //初始化画笔形状为直线
	style = PS_SOLID;  //初始化线型为实线
	m_nColor = RGB(0, 0, 0);  //初始化画笔颜色为黑色
	m_fColor = RGB(255, 255, 255);  //初始化填充颜色为白色

}

CSDL_pointView::~CSDL_pointView()
{
}

BOOL CSDL_pointView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CSDL_pointView 绘制

void CSDL_pointView::OnDraw(CDC* /*pDC*/)
{
	CSDL_pointDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CSDL_pointView 打印

BOOL CSDL_pointView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CSDL_pointView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CSDL_pointView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CSDL_pointView 诊断

#ifdef _DEBUG
void CSDL_pointView::AssertValid() const
{
	CView::AssertValid();
}

void CSDL_pointView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSDL_pointDoc* CSDL_pointView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSDL_pointDoc)));
	return (CSDL_pointDoc*)m_pDocument;
}
#endif //_DEBUG


// CSDL_pointView 消息处理程序


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
	CColorDialog Color; // 创建颜色对话框
	if (Color.DoModal() == IDOK)  // 如果用户点击OK按钮 
		m_nColor = Color.GetColor(); // 更改颜色,把颜色赋到m_nColor
	// TODO:  在此添加命令处理程序代码
}


void CSDL_pointView::Ontccolor()
{
	CColorDialog FillColor; // 创建颜色对话框
	if (FillColor.DoModal() == IDOK)  // 如果用户点击OK按钮  
		m_fColor = FillColor.GetColor(); // 更改颜色,把颜色赋到m_fColor
	// TODO:  在此添加命令处理程序代码
}

void CSDL_pointView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	m_Down = TRUE;      	//鼠标按下  
	SetCapture();       //获取坐标
	opoint = point;        //把鼠标所在坐标赋给起点坐标opoint
	ReleaseCapture();   //释放坐标
}


void CSDL_pointView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
	m_Down = FALSE;     //鼠标不按下，即弹起
	Invalidate(0);    //刷新
}


void CSDL_pointView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CView::OnMouseMove(nFlags, point);
	if (m_Down)        //如果鼠标按下
		cpoint = point;      //把鼠标所在点坐标赋给终点坐标cpoint
}

void CSDL_pointView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	CPen pen;   //定义画笔
	CBrush brush;     //定义画刷
	pen.CreatePen(style, w, m_nColor);  //创建画笔
	brush.CreateSolidBrush(m_fColor);     //创建画刷
	dc.SelectObject(&pen);      //获取画笔
	dc.SelectObject(&brush);    //获取画刷
	if (shape == 1)//绘制直线,从opoint到cpoint连线
	{
		dc.MoveTo(opoint.x, opoint.y);
		dc.LineTo(cpoint.x, cpoint.y);
	}
	if (shape == 2)
		dc.Rectangle(opoint.x, opoint.y, cpoint.x, cpoint.y); //绘制矩形
	if (shape == 3)
		dc.Ellipse(opoint.x, opoint.y, cpoint.x, cpoint.y);	//绘制椭圆
}




void CSDL_pointView::onpen()
{
	CPaintDC dc(this); // device context for painting
	CPen pen;   //定义画笔
	CBrush brush;     //定义画刷
	pen.CreatePen(style, w, m_nColor);  //创建画笔
	brush.CreateSolidBrush(m_fColor);     //创建画刷
	dc.SelectObject(&pen);      //获取画笔
	dc.SelectObject(&brush);    //获取画刷
	if (shape == 1)//绘制直线,从opoint到cpoint连线
	{
		dc.MoveTo(opoint.x, opoint.y);
		dc.LineTo(cpoint.x, cpoint.y);
	}
	if (shape == 2)
		dc.Rectangle(opoint.x, opoint.y, cpoint.x, cpoint.y); //绘制矩形
	if (shape == 3)
		dc.Ellipse(opoint.x, opoint.y, cpoint.x, cpoint.y);	//绘制椭圆
	// TODO:  在此添加命令处理程序代码
}
