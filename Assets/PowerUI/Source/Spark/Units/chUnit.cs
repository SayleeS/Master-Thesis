//--------------------------------------//               PowerUI////        For documentation or //    if you have any issues, visit//        powerUI.kulestar.com////    Copyright � 2013 Kulestar Ltd//          www.kulestar.com//--------------------------------------using System;using InfiniText;namespace Css.Units{		/// <summary>	/// Represents an instance of ch units.	/// </summary>		public class ChUnit:FontUnit{				public override string ToString(){			return RawValue+"ch";		}				public override float GetDecimal(RenderableData context,CssProperty property){						// Get the active font face:			FontFace activeFont=GetFontFace(context);						float ch;						if(activeFont==null){				ch=1f;			}else{				ch=activeFont.ChHeight;			}						return RawValue * ch * GetFontSize(context,property) * context.ValueScaleRelative;					}				protected override Value Clone(){			ChUnit result=new ChUnit();			result.RawValue=RawValue;			return result;		}				public override string[] PostText{			get{				return new string[]{"ch"};			}		}			}	}