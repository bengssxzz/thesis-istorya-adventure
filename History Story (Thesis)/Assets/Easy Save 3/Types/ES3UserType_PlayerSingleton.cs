using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute()]
	public class ES3UserType_PlayerSingleton : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_PlayerSingleton() : base(typeof(PlayerSingleton)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (PlayerSingleton)obj;
			
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (PlayerSingleton)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_PlayerSingletonArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_PlayerSingletonArray() : base(typeof(PlayerSingleton[]), ES3UserType_PlayerSingleton.Instance)
		{
			Instance = this;
		}
	}
}