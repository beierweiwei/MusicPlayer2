#pragma once
#include "stdafx.h"
#include "Time.h"
#include "Common.h"
#include "Resource.h"


//һ�׸�������Ϣ
struct SongInfo
{
	SongInfo(bool ini = true)
	{
		if (ini)
		{
			title = CCommon::LoadText(IDS_DEFAULT_TITLE);
			artist = CCommon::LoadText(IDS_DEFAULT_ARTIST);
			album = CCommon::LoadText(IDS_DEFAULT_ALBUM);
			year = CCommon::LoadText(IDS_DEFAULT_YEAR);
			genre = CCommon::LoadText(IDS_DEFAULT_GENRE);
		}
	}

	wstring file_name{};	//�������ļ���
	wstring lyric_file{};	//ƥ��ĸ���ļ���·��
	Time lengh;			//�����ĳ���
	int bitrate{};		//������
	wstring title;		//����
	wstring artist;		//������
	wstring album;		//��Ƭ��
	wstring year;		//���
	wstring comment;	//ע��
	wstring genre;		//����
	BYTE genre_idx{ 255 };		//���ֽڱ�ʾ�����ɺ�
	int track{};		//�������
	int tag_type{};		//��ǩ�����ͣ�0��������1��ID3v1��2��ID3v2��
	bool info_acquired{ false };		//����Ѿ���ȡ������Ϣ����Ϊture
	Time start_pos{};		//��Ƶ����ʼλ�ã�����cue�ֹ�
	Time end_pos{};
	bool is_cue{ false };		//�����Ŀ��cue�ֹ죬��Ϊtrue
	//wstring album_cover{};		//ר�����汣����ļ���
	wstring song_id{};			//������Ӧ�������������еĸ���ID
	int listen_time{};			//�����ۼ�����ʱ�䣨��λΪ�룩

	//�����ļ����ıȽϺ������������ļ�������
	static bool ByFileName(const SongInfo& a, const SongInfo& b) { return a.file_name < b.file_name; }
	//���ݱ���ıȽϺ����������Ա�������
	static bool ByTitle(const SongInfo& a, const SongInfo& b) { return a.title < b.title; }
	//���������ҵıȽϺ���������������������
	static bool ByArtist(const SongInfo& a, const SongInfo& b) { return a.artist < b.artist; }
	//���ݳ�Ƭ���ıȽϺ����������Գ�Ƭ������
	static bool ByAlbum(const SongInfo& a, const SongInfo& b) { return a.album < b.album; }
	//����������ŵıȽϺ����������������������
	static bool ByTrack(const SongInfo& a, const SongInfo& b) { return a.track < b.track; }

	//����һ��SongInfo�����Ʊ�ǩ��Ϣ
	void CopyAudioTag(const SongInfo& song_info)
	{
		title = song_info.title;
		artist = song_info.artist;
		album = song_info.album;
		year = song_info.year;
		comment = song_info.comment;
		genre = song_info.genre;
		genre_idx = song_info.genre_idx;
		track = song_info.track;
		tag_type = song_info.tag_type;
	}

	bool IsTitleEmpty() const
	{
		return title.empty() || title == wstring(CCommon::LoadText(IDS_DEFAULT_TITLE));
	}

	bool IsArtistEmpty() const
	{
		return artist.empty() || artist == wstring(CCommon::LoadText(IDS_DEFAULT_ARTIST));
	}

	bool IsAlbumEmpty() const
	{
		return album.empty() || album == wstring(CCommon::LoadText(IDS_DEFAULT_ALBUM));
	}

	bool IsYearEmpty() const
	{
		return year.empty() || year == wstring(CCommon::LoadText(IDS_DEFAULT_YEAR));
	}

	bool IsGenreEmpty() const
	{
		return genre.empty() || genre == wstring(CCommon::LoadText(IDS_DEFAULT_GENRE));
	}

	wstring GetTitle() const
	{
		return title.empty() ? wstring(CCommon::LoadText(IDS_DEFAULT_TITLE)) : title;
	}

	wstring GetArtist() const
	{
		return artist.empty() ? wstring(CCommon::LoadText(IDS_DEFAULT_ARTIST)) : artist;
	}

	wstring GetAlbum() const
	{
		return album.empty() ? wstring(CCommon::LoadText(IDS_DEFAULT_ALBUM)) : album;
	}

	wstring GetYear() const
	{
		return year.empty() ? wstring(CCommon::LoadText(IDS_DEFAULT_YEAR)) : year;
	}

	wstring GetGenre() const
	{
		return genre.empty() ? wstring(CCommon::LoadText(IDS_DEFAULT_GENRE)) : genre;
	}
};
