Pod::Spec.new do |s|
  s.name         = "CTCoreCategory"
  s.version      = "0.0.1"
  s.summary      = "UIView的扩展"
  s.description  = <<-DESC
                     一个UIView的扩展
                   DESC
  s.homepage     = "https://github.com/Evan-CT/CTCoreCategory"
  s.license      = 'MIT'
  s.author       = { "Evan.Cheng" => "Evan_Tong@163.com" }
  s.source       = { :git => "https://github.com/Evan-CT/CTCoreCategory.git", :tag =>  s.version }

  s.platform     = :ios, '4.3'
  s.requires_arc = true

  s.public_header_files = 'CTCoreCategory/Category.h'
  s.source_files = 'CTCoreCategory/Category.h'

  s.frameworks   = 'Foundation', 'CoreGraphics', 'UIKit'

  s.subspec 'Security' do |ss|
    ss.source_files = 'CTCoreCategory/NSArray+Extend.{h.m}'
    ss.public_header_files = 'AFNetworking/NSArray+Extend.h'
  end
end
